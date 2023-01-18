#include <stdio.h>
#include <stdlib.h>

#define ASCII_LOWERCASE = 65
#define NUMBEROF_LETTERS = 26


char randomCharacter(){

	char example = (char)(rand()%26 + 65);
	return example;

}
