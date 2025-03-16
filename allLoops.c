#include<stdio.h>
int main(){

int choice, limits;
printf("Enter a sequence of iteration [Enter a number]: ");
scanf("%d", &limits);
printf("<1:forLoop><2:whileLoop><3:doWhileLoop><Press any key for exit> :: Enter your choice: ");
scanf("%d", &choice);

if(choice == 1){
printf("For Loop: ");
for (int number = 0; number < limits; number ++){
printf("\n %d", number);
}
}
else if(choice == 2){
printf("While Loop: ");
int number = 0;
while(number < limits){
printf("\n %d", number);
number = number + 1;
}
}
else if(choice == 3){
printf("Do while Loop: ");
int number = 0;
do{
printf("\n %d", number);
number = number + 1;
}while(number < limits);
}
else{
printf("\n Exit...");
}
return 0;
}
