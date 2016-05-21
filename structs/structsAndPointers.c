#include<stdio.h>
struct name{
	int a;
	float b;
};

int main(){
	struct name *ptr, p;
	ptr=&p; // Referencing pointer to memory address of p
	printf("Enter integer: ");
	scanf("%d",&ptr->a);
	printf("Enter number: ");
	scanf("%f",&(*ptr).b); // (*ptr).b = ptr->b
	printf("Displaying:\n");
	printf("%d%f\n",(*ptr).a,(*ptr).b);
	return 0;
}