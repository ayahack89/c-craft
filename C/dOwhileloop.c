//Do while loop
#include<stdio.h>
int main(){
	int a;
	printf("Enter the value of a: ");
	scanf("%d",&a);
	do{
		printf("%d \n",a);
		a = a+1;
	}while(a<21);
	return 0;
}
