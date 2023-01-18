#include <stdio.h>
#include "header.h"
#include <stdlib.h>
#include <time.h>



int main()
{
	int a;

	/* seed the randomizer */
	srand( (unsigned)time(0) );
	short asciiUperCase = 65;
	short numLetters = 26;

	char example = randomCharacter();
	printf("%c\n", example);

	return(example);
}

