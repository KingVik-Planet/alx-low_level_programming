#include "main.h"
/**
 * read_textfile - Reads a textfile and prints the contents to the POSIX STDOUT
 * @filename: The name of the file to read from the code
 * @letters: The number of characters it should print to the STDOUT
 * Author: KingVik-Planet
 * Date: 08/05/2023
 * File: File input and output in C programming
 *
 * Return: Returns the number of characters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fild = 0, chk = 0;
	char *buffer;

	if (!filename || !letters)
		return (0);

	fild = open(filename, O_RDONLY);
	if (fild < 0)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	chk = read(fild, buffer, letters);
	chk = write(STDOUT_FILENO, buffer, chk);
	if (chk < 0)
		return (0);

	close(fild);
	free(buffer);
	return (chk);
}
