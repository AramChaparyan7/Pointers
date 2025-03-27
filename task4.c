#include <stdio.h>

int main(){
	int num1=0,num2=0;
	scanf("%d %d",&num1,&num2);
	int swp=0;
	int *temp=&swp;
	printf("before swaping %d %d\n",num1,num2);
	*temp=num1;
	num1=num2;
	num2=*temp;
	printf("after swaping %d %d\n",num1,num2);
	return 0;
}
