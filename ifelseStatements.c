#include<stdio.h>

int main(){
int age;

printf("How old are you? ");
scanf("%d", &age);

if(age < 18){
printf("Your age %d", age );
printf("\nSorry you are too young for this content.");

}
else{
printf("Your age %d", age );
printf("\nAccess Granted...");
}

return 0;
}
