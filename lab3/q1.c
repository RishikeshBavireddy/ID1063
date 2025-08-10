#include <stdio.h>
//function to check if all numbers are even
void even_check(int x, int y, int z){
if((x%2 == 0) && (y%2 == 0) && (z%2 == 0)){printf("All numbers are even");}
else printf("Not all numbers are even");
}

//function to check if a is the largest number out of a,b,c
void largest_check(int x, int y, int z){
if((x > y) && (x > z)){printf("x is the largest number");}
else printf("x is not the largest number");
}

//function to check if sum of any two numbers equals the third
void sum_check(int x, int y, int z){
if((x+y == z) | (x+z == y) | (z+y == x)){printf("The sum condition is met");}
else printf("The sum condition is not met");
}

int main(){

int x,y,z;
scanf("%d %d %d", &x,&y,&z);
even_check(x,y,z);
printf("\n");
largest_check(x,y,z);
printf("\n");
sum_check(x,y,z);
printf("\n");


}
