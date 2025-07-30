#include <stdio.h>
#include <math.h>
float f(float x){
	return (x+1/x);
}
int main(){
	float a,b,res,h,rest=0,divsable_by_3=0;
	int n,i;
	printf("enter values of a,b,n: ");
	scanf("%f%f%d",&a,&b,&n);
	h=(b-a)/n;
	for(i=1;i<n;i++){
		if(i%3==0){
			divsable_by_3+=f(a+i*h);
		}
		else{
			rest+=f(a+i*h);
		}
		
	}
	res=(3*h/8)*(f(a)+f(b)+2*divsable_by_3+3*rest);
	printf("the result is %f",res);
	return 0;
	
}
