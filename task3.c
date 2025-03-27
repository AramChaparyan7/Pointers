#include <stdio.h>

int main(){
	char c='\0';
	scanf("%c",&c);
	char *ptr=&c;
	printf("addres in pointer was %p\n",ptr);
	++ptr;
	printf("addres in pointer is %p\n",ptr);
	return 0;
}
