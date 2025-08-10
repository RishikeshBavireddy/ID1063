#include <stdio.h>
#include <math.h>

int main(){
int x;
scanf("%d", &x);

//declare 'sum' to keep track of running output
int sum;
sum = 0;

int xf = x;

int n = 0;//no of digits of n
int xc = x;//xc is copy of x

//find number of digits n
while(xc>0){
n++;
xc = xc/10;
}


while(x > 0){
sum += pow(x%10,n);
x = x/10;
}

if(xf == sum) printf("TRUE");
else printf("FALSE");
}
