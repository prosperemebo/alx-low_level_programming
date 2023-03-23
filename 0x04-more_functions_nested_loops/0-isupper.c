#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isupper - checks if character is upper
 * @c - character
 * 
 * Return - (1) if character is upper and (0) is character is not upper
 */

int _isupper(char c) {
	if(isupper(c)) {
		return (1);
	} else {
		return (0);
	}	
}
