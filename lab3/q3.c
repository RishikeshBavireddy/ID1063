#include <stdio.h>

int main(void){
int num1, num2;
char oper;
int result;
scanf("%d %d %c", &num1, &num2, &oper);
if(num2 != 0){
switch(oper){
case '+' : result = num1 + num2;
break;
case '-' : result = num1 - num2;
break;
case '*' : result = num1*num2;
break;
case '/' : result = num1/num2;
break;
default : printf("Error: Invalid format");
}
}
if(num2 == 0) printf("Error: division by zero is not allowed");

printf("%d", result);


}
