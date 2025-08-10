#include<stdio.h>
#include<stdlib.h>

//function to rotate array by k elements(pointer based approach)
void rotate(int n, int k, int* arr){
//create an array of k elements to store elements from a[n-1] to a[n-k]
int buffer[k];
for(int i = 0; i < k; i++){buffer[i] = *(arr + n - k + i);}
for(int j = 0;  j < n-k; j++){*(arr + k + j) = *(arr + j);}
//store a[0] at a[k]; a[1] at a[k+1]; and so on till a[n-k-1] at a[n-1] 
for(int i = 0; i < k; i++){*(arr + i) = buffer[i];}

}
int main(){
int n, k;
scanf("%d %d", &n, &k);
int* arrayPtr = malloc(sizeof(int)*n);

for(int i = 0; i < n; i++){scanf("%d ", arrayPtr + i);}
rotate(n,k,arrayPtr);

for(int i = 0;i < n; i++){printf("%d ",*(arrayPtr + i));}
}
