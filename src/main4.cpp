#include <stdio.h>
#include "task4.h"

int main()
{
	int feet = 0;
	int inches = 0;

	printf("Enter value (for example 6,15): ");
	scanf("%d,%d", &feet, &inches);

	printf("%.2f cm", convert(feet, inches));
	return 0;
}