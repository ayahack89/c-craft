#include<stdio.h>
int main(){
	int a,formula,i,flag=0;
	printf("Enter the value of a");
	scanf("%d",&a);
	formula = a/2;
	for(i=2;i>0;i++){
		
		if (a%2==0){
			printf("%d The number is not prime number.");
			flag = 1;
			break;
			
		}
		if (flag==1){
			printf("%d The number is a prime number. ");
		}
		
	}
	return 0;
}
