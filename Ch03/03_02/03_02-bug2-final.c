/*
   Here is the repaired source code
 */
#include <stdio.h>
#include <ctype.h>

int main()
{
	char string[] = "Hello again, weird little program.\n";
	char *s;

	/* always initialize a pointer! */
	s = string;

	/* parse words */
	while( *s != '\0' )
	{
		if( !isalpha(*s) )
		{
			while( !isalpha(*s) )
			{
				if( *s=='\0' )		/* added check */
					break;			/* exit loop */
				s++;
			}
			putchar('\n');
		}
		else
		{
			putchar(*s);
			s++;					/* included in else block */
		}

	}

	return 0;
}
