#include<stdio.h>

int main()
{
	char x[] = "x0";
	char y[] = "y0";
	char *ptr;
	char *xptr = &x;

	ptr = x;
	x[1] = '1';
	puts("Round 1 : ");
	printf("ptr = %s\nx = %s\ny = %s\n", ptr, xptr, y);
	/*
	x = &y;
	y = ptr;
	printf("ptr = %s\nx = %s\ny = %s\n", ptr, x, y);
	*/
	return 0;
}
