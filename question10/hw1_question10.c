#include <stdio.h>
#include <math.h>

int main()
{
	int x = 9 + 1;
	int y = -9 - 1;
	float distance = sqrt(x*x + y*y);
	printf("The distance between the points is %f\n", distance);
}
