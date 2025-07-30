#include<stdio.h>
#include<math.h>
float f(float x, float y){
   return (x+y);
}
int main(){
    float x0, y0, y1, xn, h;
    printf("Enter the value of x0, y0, xn,h: ");
    scanf("%f%f%f%f", &x0, &y0,&xn, &h);
    do{
      
        y1 = y0 + h * f(x0, y0);
        x0 = x0 + h;
		y0 = y1;        
        printf("The value of y = f(%f) = %f \n",x0,y1);
    }while(x0 <= xn);
    return 0;
	}
//#include <stdio.h>
//#include <math.h>
//float f(float x,float y){
//	return(x+y);
//}
//int main(){
//	float x0,y0,xn,h,y1;
//	printf("Enter the value of x0,y0,xn,h");
//	scanf("%f%f%f%f",&x0,&y0,&xn,&h);
//	do{
//		y1=y0+h*f(x0,y0);
//		x0+=h;
//		y0=y1;
//		printf("The value of f(%f) is %f\n",x0,y1);
//	}while (x0<=xn);
//}
