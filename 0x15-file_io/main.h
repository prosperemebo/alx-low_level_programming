#ifndef HEADER_FILE
#define HEADER_FILE

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

ssize_t read_textfile(const char *filename, size_t letters);

#endif
