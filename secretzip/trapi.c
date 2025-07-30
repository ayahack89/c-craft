#include <stdio.h>
#include <math.h>
float f(float x){
	return(x+1/x);
}
int main(){
	float a,b,res=0,middle=0,h;
	int n,i;	
	printf("Enter the a,b,n value");
	scanf("%f%f%d",&a,&b,&n);
	h=(b-a)/n;
	res+=f(a)+f(b);
	for (i=1;i<n;i++){
		middle+=f(a+i*h);
	}
	res+=2*middle;
	res=res*h/2;
	printf("res= %f",res);
	return 0;
}
