#include <stdio.h>

int main()
{
	char buffer[] = "Hello, debugger!\n";
	int array[] = { 1, 1, 2, 3, 5, 8, 13 };
	int size,x;

	/* obtain array size */
	size = sizeof(array)/sizeof(array[0]);

	/* output stuff */
	printf("%s",buffer);
	for( x=0; x<size; x++ )
		printf("%d\n",array[x]);

	return 0;
}
