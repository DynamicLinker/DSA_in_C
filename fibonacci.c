#include<stdio.h>

int main(){
    int n;
    printf("Enter the Value of n:\n");
    scanf("%d", &n);
    int first = 0 , second = 1 , third = first + second;
    printf("%d %d ",first , second);
    for(int i = 2 ; i < n; i++){
        printf("%d ",third);
        first = second;
        second = third;
        third = first + second;
    }
    return 0;
}
