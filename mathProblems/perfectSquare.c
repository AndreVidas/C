#include<stdio.h>
#include<math.h>


int nextPerfectSquare(int n){
	if(fmod(sqrt(n), 1.0) == 0){
		return pow(n+1,2);
	}
	else{return -1;}
}


int main(){
	int i = 2;
	printf("%f\n", pow(i,2));
	printf("n = 12: %d\n",nextPerfectSquare(12));
	printf("n = 13: %d\n",nextPerfectSquare(13));
	printf("n = 9: %d\n",nextPerfectSquare(9));
	printf("n = 564: %d\n",nextPerfectSquare(564));
	return 0;

}