#include <stdio.h>

void finda(char *s)
{
puts("In the finda() function");	
	while( *s != '\0' )
	{
printf("while loop at Line %d, letter %c\n",__LINE__,*s);		
		if( *s=='A' );
			puts("Found the letter 'A'");
		s++;
	}
}

int main()
{
	char a[] = "ABC";

	printf("Test string: %s\n",a);
	finda(a);

	return 0;
}
