#include <stdio.h>
#define PI 3.14

int main()
{
	int rad = 2;
	int height = 6;
	float sa = (2 * PI * rad * height) + (2 * PI * rad * rad);
	float vol = PI * rad * rad * height;
	printf("The volume of the soda can is %f and the surface area of the cylinder is %f\n", vol, sa);
	return 0;
}
