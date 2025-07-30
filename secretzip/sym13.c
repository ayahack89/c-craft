/*
h/3((y0+yn)+4(y1+y3+y5+y7+......)+2(y2+y4+........))
res
odd
even
res=fa+fb+4*odd+2*even

*/
#include <stdio.h>
#include <math.h>
float f(float x){
	return (x+1/x);
}
int main(){
	float a,b,res,h,odd=0,even=0;
	int n,i;
	printf("enter values of a,b,n: ");
	scanf("%f%f%d",&a,&b,&n);
	h=(b-a)/n;
	for(i=1;i<n;i++){
		if(i%2==0){
			even+=f(a+i*h);
		}
		else{
			odd+=f(a+i*h);
		}
		
	}
	res=(h/3)*(f(a)+f(b)+4*odd+2*even);
	printf("the result is %f",res);
	return 0;
	
}
//for i in range(2,n,2)
//a=inicial
//b=final
//f(a)=y0
//f(b)=yn
//y=f(x)
