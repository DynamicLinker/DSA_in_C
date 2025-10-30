#include<stdio.h>
void rotate(int a[], int n, int times){
    while(times--){
        for(int i = n; i > 1; i--){
            int s = a[i-1];
            a[i-1] = a[i-2];
            a[i-2] = s;
        }
    }
}


int main(){
    int n, t;
    printf("Enter size:\n");
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("no. of times to rotate:");
    scanf("%d", &t);
    rotate(a, n, t);
    for(int i = 0; i < n; i++)
        printf("%d", a[i]);
    return 0;
}
