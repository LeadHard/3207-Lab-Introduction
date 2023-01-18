#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main()
{
	int a;

	/* seed the randomizer */
	srand( (unsigned)time(0) );
	short asciiUperCase = 65;
	short numLetters = 26;

	char example = (char)(rand()%numLetters+asciiUperCase);
	printf("%c\n", example);

	return(example);
}

