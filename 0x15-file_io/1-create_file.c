#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - Creates a new file and writes text content to it.
 *
 * @filename: The name of the file to create.
 * @text_content: The text content to write to the file.
 *
 * Return: On success, returns 1. On failure, returns -1.
 */
int create_file(const char *filename, char *text_content)
{
int fd, w, len = 0;

if (filename == NULL)
{
printf("Error: filename is NULL\n");
return (-1);
}
if (text_content != NULL)
{
while (text_content[len] != '\0')
{
len++;
}
}
fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fd == -1)
{
printf("Error: could not create file\n");
return (-1);
}
w = write(fd, text_content, len);
if (w == -1)
{
printf("Error: could not write to file\n");
close(fd);
return (-1);
}
close(fd);
return (1);
}
