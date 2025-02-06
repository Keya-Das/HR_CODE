// question no-1
#include<stdio.h>
int main(){
  int a;
 printf("enter a:");
 scanf("%d",&a);
 int b;
 printf("enter b:");
 scanf("%d",&b);
 a = a + b;
 b = a - b;
 a = a - b;
 printf("the value of a is %d\n",a);
  printf("the value of a is %d\n",b);
  return 0;
}