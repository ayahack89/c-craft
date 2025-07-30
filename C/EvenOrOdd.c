//Even or Odd
#include<stdio.h>
int main(){
	int a;
	printf("Enter the value of a: ");
	scanf("%d",&a);
	if (a%2==0){
		printf("The number is even %d",a);
	}
	else{
		printf("The number is odd %d",a);
	}
	return 0;
}
