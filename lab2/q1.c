#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c;
    scanf("%f %f %f", &a, &b, &c);
    float out = (pow(a,3) + pow(b,2) - c)/(a - b +c);
    printf("%f", out);

}
