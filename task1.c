#include <stdio.h>

int main(){
	int num=0;
	scanf("%d",&num);
	int *ptr=&num;
	printf("addres of num is %p %p\n",&num,ptr);
	printf("value of num is %d",*ptr);
	return 0;
}
