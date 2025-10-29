#include<stdio.h>

void fib(int first, int second, int n){
    if(n == 0)
        return;
    printf("%d ",first + second);
    fib(second , first + second , n-1);
}

int main(){
    int n;
    printf("Enter the Value of n:\n");
    scanf("%d", &n);
    printf("%d %d ",0,1);
    fib(0 , 1 , n - 2);
    return 0;
}
