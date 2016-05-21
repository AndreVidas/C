#include<stdio.h>
const int MAX = 3;

//array of pointers

int main(){
	int var[] = {10, 100, 200};
	int i, *ptr[MAX];

	for(i = 0; i < MAX; i++){
		ptr[i] = &var[i];
	}

	for(i = 0; i < MAX; i++){
		printf("Address of var[%d] = %x\n", i, ptr[i]);
		printf("Value of var[%d] = %d\n", i, *ptr[i]);
	}

	return 0;
}