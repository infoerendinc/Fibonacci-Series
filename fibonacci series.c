#include <stdio.h>

int main() {
int n = 10;
int i;

int fibo[n];
fibo[0]= 0;
fibo[1] = 1;
for (i= 2; i < n; i++) {
fibo[1] = fibo[i-1] + fibo[i - 2];
}
printf("Fibonacci Serisi (ilk 10 terim):\n") ; 
    for (i=0; i < n; i++) {
        printf("%d ", fibo[i]);
}
return 0;
}