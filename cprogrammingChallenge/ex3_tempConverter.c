#include<stdio.h>

int main(){
	double celcius;
	double fahrenheit;
	double minValue;
	double maxValue;
	double stepsize = 0.2;

	printf("Please give in a lower limit, limit >= 0: ");
	scanf("%lf",&minValue);

	printf("Please give in a higher limit, %f < limit <= 50000: ", minValue);
	scanf("%lf",&maxValue);

	printf("%lf\n", minValue);
	printf("%lf\n", maxValue);

	printf("Degrees		Fahrenheit\n");
	printf("-------		----------\n");
	for(celcius = minValue; celcius < maxValue; celcius = celcius + stepsize){
		// convert to fahrenheit
		fahrenheit = celcius * (9/5)+32;
		printf("%0.1lf	%0.1lf\n",celcius, fahrenheit);
	}
}