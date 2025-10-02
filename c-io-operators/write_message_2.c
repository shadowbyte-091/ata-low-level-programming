#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(void)
{
    const char *message = "Coding in C is powerful!\n";
    int fd;

    // Write to standard output
    write(STDOUT_FILENO, message, 26); // 26 characters including '\n'

    // Open file in write mode (create if it doesn’t exist, truncate if it does)
    fd = open("write.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);

    if (fd == -1)
    {
        write(STDOUT_FILENO, "Error opening file\n", 19);
        return 1;
    }

    // Write to the file
    write(fd, message, 26);

    // Close the file
    close(fd);

    return 0;
}

