#include <stdio.h>
#include <math.h>

//write a function which computes sum of elements of a "sub-number" given start, end points and the main number
unsigned int sum_sub(unsigned int number, int start, int end, int digits){
unsigned int sum = 0;
unsigned int sub_num = (number/(unsigned int)pow(10, digits - 1 - end))%((unsigned int)pow(10, end - start + 1));
while(sub_num > 0){
sum += sub_num%10;
sub_num = sub_num/10;
}
return sum;
}

int main(){
//int N, K, T
unsigned int N,K,T;
scanf("%u %u", &N, &K);

int n = 0;
unsigned int Nc = N;
//write a while loop to find the number of digits
while(Nc > 0) {
n++;
Nc = Nc/10;
}

unsigned int sum = 0;
T = 0;
int start, end;
//start pointer runs from  i = 0 to i = digits corresponding end pointer runs from start pointer to end of no
//use a key for knowing if sum is exceeding the set limit
//while the key is less than the limit keep incrementing T(initial value of T is zero)
for(int start = 0; start < n; start++){
		for(int end = start; end < n; end++){
			if(sum_sub(N,start,end,n) <= K){T++;}
		}
}
printf("%u", T);
}
