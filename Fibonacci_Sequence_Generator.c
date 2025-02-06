// question no-7
#include<stdio.h>
int main(){
    int n, x = 0, y = 1, z = 0;
    printf("entermax limit:\n");
    scanf("%d",&n);
    while(z<=n){
        printf("\n %d", z);
        x = y;
        y = z;
        z = x + y;
    }
    return 0;
    
}