#include<stdio.h>
#include<math.h>
float f(float x){
    return(x*x*x -x -1);
}
float f_dash(float x){
    return ((3*x*x) - 1);
}
int main(){
    float e, n, xn, x, i = 0;
    printf("Enter the accuracy: ");
    scanf("%f" ,&e);
    do{
        printf("Enter two interval: ");
        scanf("%f%f", &n, &xn);
    }while(f(n)*f(xn) > 0.0);
    do{
        x = xn - (f(xn)/f_dash(xn));
        printf("\n n = %f \t xn = %f \t x = %f \t i = %f", n,xn,x,i);
        if(f(x)*f(n) > 0){
        	xn = x;
		}else{
			n = x;
		}
        
    }while(fabs(f(x)) > e);
    printf("The root of the equation: %f",)
    
    	
	
}
