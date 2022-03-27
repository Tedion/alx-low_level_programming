#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - generates random passwords
 *
 *Return:0(success)
 *
 */
int main(void)
{
	int i, sum, n;
	int pass[100];

	sum = 0;

	srand(time(NULL));


