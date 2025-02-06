// question no-4
#include<stdio.h>
int main(){
    int n,count = 0;
    printf("enter the number:\n");
    scanf("%d\n",&n);
    for (int i=1;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }
    if(count == 2){
    printf("prime number");
    }
    else{
    printf("not prime number");
    }
    return 0;
}