#include <stdio.h>

int main(){
	int num1=0,num2=0;
	scanf("%d %d",&num1,&num2);
	int *ptr=&num1;
	printf("number was %d\n",*ptr);
	*ptr=num2;
	printf("number is %d\n",*ptr);
	return 0;
}
