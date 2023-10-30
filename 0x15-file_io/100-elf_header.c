#include "main.h"
void print_error(char *msg, int code)
{
    dprintf(2, msg, code);
    exit(code);
}

void print_elf_header(int file)
{
	int i;
    char buffer[BUFFER_SIZE];
    off_t lseek_result;
    ssize_t read_result;

    lseek_result = lseek(file, 1, SEEK_SET);
    read_result = read(file, buffer, BUFFER_SIZE);

    if (lseek_result == -1 || read_result == -1)
        print_error("Error: Unable to read ELF header from file\n", 98);

    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (i = 0; i < 16; i++)
        printf("%02x%s", buffer[i] & 0xFF, i < 15 ? " " : "\n");
    printf("  Class:                             ELF%d\n", buffer[4] == 1 ? 32 : 64);
    printf("  Data:                              2's complement, %s endian\n",
           buffer[5] == 1 ? "little" : "big");
    printf("  Version:                           %d (current)\n", buffer[6]);
    printf("  OS/ABI:                            %s\n",
           buffer[7] == 0 ? "UNIX - System V" : "UNIX - NetBSD");
    printf("  ABI Version:                       %d\n", buffer[8]);
    printf("  Type:                              %s (Executable file)\n",
           buffer[16] == 2 ? "EXEC" : "DYN");
    printf("  Entry point address:               0x%x\n", *(unsigned int *)
		    (buffer + 24));
}

int main(int ac, char **av) {
    int file;

    if (ac != 2 || (file = open(av[1], O_RDONLY)) == -1)
        print_error("Usage: %s elf_filename\n", 98);

    print_elf_header(file);

    (void)close(file);
    return (0);
}
