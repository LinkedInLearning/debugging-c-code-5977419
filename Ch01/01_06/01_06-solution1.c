#include <stdio.h>

float wallis(float a)
{
	return(a/(a-1.0)) * (a/(a+1.0));
}

int main()
{
	float p,pi;
	int x;

	pi = 1.0;
	p = 2.0;
	for( x=0; x<100000; x++ )
	{
		pi *= wallis(p);
		p+=2.0;
	}

	printf("%f\n",pi*2);

	return 0;
}
