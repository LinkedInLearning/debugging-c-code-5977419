#include <stdio.h>

char *change(char *s)
{
	while( *s != '\0' )
	{
		*s+=1;
		s++;
	}

	return(s);
}

int main()
{
	char a[] = "ABC";
	char *b;

	printf("Before: %s\n",a);
	b = change(a);
	printf("After: %s\n",b);

	return 0;
}
