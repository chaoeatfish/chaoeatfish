#include <stdio.h>
#include <stdlib.h>

int main()
{
	int random_num();
	void populate_num(int *p, int n, int(*random_num)());
	void move(int *p, int n, int m);
	int a[10],*p;
	int n = 8;
	p = a;
	populate_num(p, n, random_num);
	move(p, n, 3);
	for (int i = 0; i < n; i++) 
	{
		printf("%d ", a[i]);
	}
	return 0;
}

int random_num(void)
{
	return rand();
}

void populate_num(int *p,int n,int (*random_num)())
{
	int i;
	for ( i = 0; i < n; i++)
	{
		*p = random_num();
		p++;
	}
}

void move(int *p, int n, int m)
{
	int num_end;
	num_end = *(p + n - 1);
	for (int *t = p + n -1; t > p; t--)
	{
		*t = *(t - 1);
	}
	*p = num_end;
	m--;
	if (m > 0)move(p,n,m);
}