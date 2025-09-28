#include<stdio.h>
 struct Array{
    int A[50];
    int size;
    int length;
}arr;


void traverse(struct Array arr){
    for(int i=0;i<arr.length;i++)
        printf("%d ",arr.A[i]);
}

void update(struct Array arr){
    int x,index;
    printf("Enter value:");
    scanf("%d",&x);
    printf("Enter index:");
    scanf("%d",&index);
    arr.A[index]=x;
    traverse(arr);
}

void delete(struct Array *arr){
    int index;
    printf("Enter index");
    scanf("%d",&index);
    if(index<arr->length){
        for(int i=index;i<arr->length;i++){
            arr->A[i]=arr->A[i+1];
        }
    }
    traverse(*arr);
}

void insert(struct Array *arr){
    int x,index;
    printf("Enter element:");
    scanf("%d",&x);
    printf("Enter index");
    scanf("%d",&index);
    if(index<arr->length){
        for(int i=arr->length;i>index;i--){
            int t=arr->A[i-1];
            arr->A[i-1]=arr->A[i];
            arr->A[i]=t;
        }
        arr->A[index]=x;
    }
    traverse(*arr);
}

void main(){
    int n,x,index;
    printf("enter size:");
    scanf("%d",&n);
    struct Array arr;
    arr.size=n+1,arr.length=n;
    for(int i=0;i<n;i++)
        scanf("%d",&arr.A[i]);
    for(int i=0;i<n;i++)
        printf("%d ",arr.A[i]);
    printf("\n1:traverse\n2:insert\n3:delete\n");
    int c;
    scanf("%d",&c);
    switch(c){
        case 1:traverse(arr);
        break;
        case 2:insert(&arr);
        break;
        case 3:delete(&arr);
        break;
        case 4:update(arr);
        break;
    }
}
