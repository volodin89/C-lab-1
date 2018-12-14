#include <stdio.h>

char * convert(char buf[], double angle, char type)
{
	const double pi = 3.14159265359;

	if (type == 'R')
	{
		angle = angle * 180 / pi;
		sprintf(buf, "%.1f%c", angle, 'D');
	}
	if (type == 'D')
	{
		angle = angle * pi / 180;
		sprintf(buf, "%.5f%c", angle, 'R');
	}
	return buf;
}