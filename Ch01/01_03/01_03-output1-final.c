#include <stdio.h>

void change(char *s)
{
	while( *s != '\0' )
	{
		*s+=1;
		s++;
	}
}

int main()
{
	char a[] = "ABC";

	printf("Before: %s (%p)\n",a,a);
	change(a);
	printf("After: %s (%p)\n",a,a);

	return 0;
}
