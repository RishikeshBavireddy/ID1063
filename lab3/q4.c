#include <stdio.h>
//function that prints the day based on number
void print_date(int n){
switch(n){
case 1 : printf("MONDAY\n");
break;

case 2 : printf("TUESDAY\n");
break; 

case 3 : printf("WEDNESDAY\n");
break; 

case 4 : printf("THURSDAY\n");
break; 

case 5 : printf("FRIDAY\n");
break; 

case 6 : printf("SATURDAY\n");
break; 

case 7 : printf("SUNDAY\n");
break; 

default : printf("INVALID\n");
}
}
int main(){
int index;
scanf("%d", &index);
print_date(index);



}
