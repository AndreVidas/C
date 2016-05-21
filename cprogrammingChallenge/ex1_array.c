#include<stdio.h>

int main(){
	const int MAX = 8;
	int i;
	int array[MAX];
	printf("Enter 8 numbers to be put into an array:\n");
	for(i = 0; i < MAX; i++){
		printf("\nNumber to be put in index %d of the array: ", i);
		scanf("%d", &array[i]);
	}
	for(i = 0; i < MAX; i++){
		printf("%d\n", array[i]);
	}
	return 0;
}