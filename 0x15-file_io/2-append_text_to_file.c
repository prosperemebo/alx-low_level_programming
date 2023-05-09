#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: Name of the file to append text to.
 * @text_content: Text to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, length = 0, is_written;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[length])
			length++;
		is_written = write(file_descriptor, text_content, length);
		if (is_written != length)
		{
			close(file_descriptor);
			return (-1);
		}
	}

	close(file_descriptor);
	return (1);
}
