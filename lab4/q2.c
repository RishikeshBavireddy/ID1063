#include <stdio.h>
#include <math.h>

int main(){
double x;
int k;
double out;
scanf("%lf %d", &x, &k);
out = 0;
for(int i = 1; i <= k; i++){
out += pow(-1,i+1)*pow(x,i)/(double)i;
}
printf("%.4lf", out);

}
