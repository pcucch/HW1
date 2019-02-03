#include <stdio.h>
int main()
{
	int kelvin = 711;
	float celcius = kelvin - 273.15;
	float fahr = (celcius * 9 / 5) + 32;
	printf("%d kelvin is equivalent to %f degrees fahrenheit\n", kelvin, fahr);
	return 0;
}
