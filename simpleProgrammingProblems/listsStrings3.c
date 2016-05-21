#include<stdio.h>
#include<stdbool.h>

bool checkElementInList(int element, int array[], int size){
	int i;
	for(i = 0; i < size; i++){
		if(element == array[i]){
			return true;
		}
	}
	return false;

	
}


int main(){
	int array[] = {1,2,3242,23,2};
	bool x1 = checkElementInList(2, array, 5);
	printf(x1 ? "true\n" : "false\n");

	bool x2 = checkElementInList(-2, array, 5);
	printf(x2 ? "true\n" : "false\n");
	//printf("%d",checkElementInList(-2, array,5));
}

