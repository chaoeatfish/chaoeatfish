#include <stdio.h>
int main()
{
	int i,a[] = { 200,100,50 };
	int *p[3];
	for ( i= 0; i < 3; i++)
	{
		p[i] = &a[i];
		printf("%p\t", p[i]);
		printf("%d\n", *p[i]);
	}
	


	/*for (i = 0; i <3; i++)
	{
		printf("%p\t", p);
		printf("%d\n", *p);
		p++;
	}*/
	
	return 0;
}