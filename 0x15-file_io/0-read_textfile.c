#include "main.h"
/**
  * read_textfile - reads a text file
  * @filename: file
  * @letters: letters to print
  * Return: 0 on success
  **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int txt_file, total, read_status;
	char buffer[BUFFERSIZE];

	if (filename == NULL)
		return (0);
	txt_file = open(filename, O_RDONLY);
	if (txt_file == -1)
		return (0);
	total = 0;
	read_status = 1;
	while (letters > BUFFERSIZE && read_status != 0)
	{
		read_status = read(txt_file, buffer, BUFFERSIZE);
		write(STDOUT_FILENO, buffer, read_status);
		total += read_status;
		letters -= BUFFERSIZE;
	}
	read_status = read(txt_file, buffer, letters);
	write(STDOUT_FILENO, buffer, read_status);
	total += read_status;
	close(txt_file);
	return (total);
}
