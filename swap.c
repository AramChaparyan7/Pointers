#include <stdio.h>

int main(){
	int a=0,b=0;
	printf("input numbers\n");
	scanf("%d %d",&a,&b);
	printf("before swaping %d %d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swaping %d %d\n",a,b);
	return 0;
}
