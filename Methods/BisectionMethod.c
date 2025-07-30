#include<stdio.h>
#include<math.h>
float f(float x){
	return (x*x*x-9*x+1);
}
int main(){
	float e,a,b,c;
	int k=0;
	printf("Enter accuracey :- ");
	scanf("%f", &e);
	do{
		printf("\n Enter an interval:- ");
		scanf("%f%f",&a,&b);
		
	}
	while(f(a)*f(a)>0.0);
	do{
		c=(a+b)/2.0;
		printf("k=%d\t a=%f\t c=%f\tf(c)%f", k,a,b,c,f(c));
	}while(fabs(f(c))>e);
	if(f(a)*f(c)<0.0){
		b=c;
	}
	else{
		a=c;
		k=k+1;
	}
	
	
	printf("root of equation is%f",c);
	printf("\n No of iteration is %d", k);
	return 0;
	
}
