
#include "random.h"




int main()
{
	int a;

	/* seed the randomizer */
	srand( (unsigned)time(NULL) );

	printf("Today's random word: ");
	for(a=0;a<7;a++)
		putchar(randchar()); // randchar unfinished
	putchar('\n');

	return (0);
}

