#include <stdio.h>
main()
{
	float fahr;
	int lower, upper, steps,celsius;

	lower = 10;
	upper = 100;
	steps = 10;

	celsius = lower;
	while (celsius <= upper)
	{
		fahr = 9 * celsius/5+32;
		printf("%3d %7.1f\n",celsius,fahr);
		celsius = celsius + steps;
	}
}