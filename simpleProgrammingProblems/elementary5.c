#include<stdio.h>

int main(){

	int userValue;
	int sum = 0;
	int i; // for loop integer

	printf("Type in a integer: ");
	scanf("%d", &userValue);
	
	for(i = 1; i <= userValue; i++){
		if(i % 3 == 0 | i % 5 == 0){
			printf("%d\n", i);
			sum += i;
		}
		
	}
	printf("The sum of all integers up to the chosen integer: %d\n", sum);

}
