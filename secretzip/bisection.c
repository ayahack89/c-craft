//Bisection code formula : x = (x1 + x2)/2.0;
/// accuracy=0.001
//%d=integer
/*
%f=float
(a,b)
*/
#include <stdio.h>
#include <math.h>
float f(float x){
	return (x*x*x-9*x+1);//write the function here	
}
int main(){
	float e,x1,x2,x;
	int i=0;
	printf("Enter the accuracy: ");
	scanf("%f",&e);
	do{
		printf("enter a,b values(inicial guess)");
		scanf("%f%f",&x1,&x2);
	}while(f(x1)*f(x2)>0);
	do{
		x=(x1+x2)/2.0;
		printf("i=%d\t\tx1=%f\t\tx2=%f\t\tx=%f\t\tf(x)=%f\n",i,x1,x2,x,f(x));
		if (f(x1)*f(x)<0.0){
			x2=x;
		}
		else{
			x1=x;
		}
		i++;
	}while (fabs(f(x))>e);
	printf("Root of the Equation is %f\n",x);
	printf("no of iterations: %f",i);
	return 0;
	
}
