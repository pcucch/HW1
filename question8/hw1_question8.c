#include <stdio.h>
#define PI 3.14
int main()
{
	int radius = 6371;
	float sa = 4 * PI * radius * radius;
	float vol = 4 * PI * radius * radius * radius / 3;
	printf("The surface area is %f and the volume is %f \n", sa, vol);
	return 0;
}
