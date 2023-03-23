#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point for program
 * 
 * Return - (0) on success
 */

int _isupper(char c) {
	if(isupper(c)) {
		return (1);
	} else {
		return (0);
	}	
}
