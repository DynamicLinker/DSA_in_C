#include<stdio.h>
int palindrome(int x){
    int sum = 0,t = x;
    while(t){
        sum = sum * 10 + (t % 10);
        t /= 10;
    }
    if(sum == x)
        return 1;
    else
        return 0;
}

int main(){
    int n;
    printf("Enter number:\n");
    scanf("%d", &n);
    if(palindrome(n))
        printf("YES");
    else
        printf("NO");
    return 0;
}
