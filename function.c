#include<stdio.h>
#include<string.h>

void Demo(){
char str1[10];
printf("Enter a string without space: ");
scanf("%s", &str1);
printf("\n%s\n", str1);

}

int Calculator(int number1, int number2){
char choice[10];
printf("<+:addition><-:subtraction><*:multiplication></:division> :: Enter your operator: ");
scanf("%s", choice);

if(strcmp(choice, "+")==0){
    int add;
    add = number1 + number2;
    return add;
}
if(strcmp(choice, "-")==0){
    int sub;
    sub = number1 - number2;
    return sub;
}
if(strcmp(choice, "*")==0){
    int multi;
    multi = number1 * number2;
    return multi;
}
if(strcmp(choice, "/")==0){
    int div;
    div = number1 / number2;
    return div;
}
}

int main(){

Demo();
int number1, number2, result;
printf("Enter a number: ");
scanf("%d", &number1);
printf("Enter another number: ");
scanf("%d", &number2);

result = Calculator(number1, number2);
printf("%d", result);

return 0;
}
