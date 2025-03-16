#include<stdio.h>

int Calculator(int number1, int number2){
int Addition = number1 + number2;
return Addition;
}

int main(){
int result;
result = Calculator(3,2);
printf("%d", result);
return 0;
}
