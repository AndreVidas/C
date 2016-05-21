#include<stdio.h>


int findMaxInList(int array[], int size){
	int max = 0;
	int i;
	for(i = 0; i < size; i++){
		if(max < array[i]){
			max = array[i];
		}
	}
	return max;
}


int findMaxInList(int array[], int size);

int main(){
	
	int array[9] = {1,21,54,2,32,3,4,4,324};
	int size = sizeof(array) / sizeof(int);
	printf("%d\n",findMaxInList(array, size));
	

}