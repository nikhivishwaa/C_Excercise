#include<stdio.h>

void fib(int x){
    int a=0,b=1,i=0,k=0;
    for(i=0;i<x;i++){
        if(i==0)printf("%d, ",a);
        else if(i==1)printf("%d, ",b);
        else {
            printf("%d, ",a+b);
            k = a;
            a = b;
            b = k+b;
        }
        

    }
}

int main(){
    int x,n;
    printf("Enter No. of Terms : ");
    scanf("%d",&n);
    fib(n);
    return 0;
}