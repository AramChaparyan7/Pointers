#include <stdio.h>

int main(){
	int *ptr=NULL;
	if(!ptr){
		printf("pointer is a NULL Pointer\n");
	}
	int num=0;
	printf("input a number\n");
	scanf("%d",&num);
	ptr=&num;
	printf("value of variable is %d\n",*ptr);
	return 0;
}
