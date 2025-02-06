 // question no-5
 #include<stdio.h>
void primefactor(int n);
int main(){
    int n;
    printf("enter the number:\n");
    scanf("%d\n",&n);
    primefactor(n);
    return 0;
}
void primefactor(int n)
{
    int count;
    printf("\n prime factors of %d are:\n", n);
    for(count = 2; n>1; count++){
        while(n % count == 0)
        {
            printf("%d",count);
            n = n/count;
        }
    }
    printf("\n");
}
    
     