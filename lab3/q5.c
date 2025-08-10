#include <stdio.h>

int main(){
//declare x,y,choice
int x,y,choice;
//declare out
int out;
//user input of x,y,choice
scanf("%d %d %d", &x, &y, &choice);

if(choice == 1){out = x>y ? x : y; printf("max:x>y?x:y\n"); printf("%d", out);}
else if(choice == 2){out = x<y ? x : y; printf("max:x<y?x:y\n"); printf("%d", out);}
else if(choice == 3){out = x == y ? 1 : 0; printf("equality:x==y?1:0\n"); printf("%d", out);}
else printf("invalid");

}
