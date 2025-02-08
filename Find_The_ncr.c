#include<stdio.h>
long long factorial (int num){
  long long fact = 1;
  for(int i = 1; i<=num; i++){
    fact *= i;

  }
  return 0;
}
long long ncr (int n, int r){
  if(r>n){
    return 0;
  }
  return factorial(n)/(factorial(r) * factorial(n-r));
}
int main(){
  int n,r;
  printf("enter values of n:");
  scanf("%d", &n);
  printf("enter values of r:");
  scanf("%d",&r);
  printf("ncr(%d,%d) = %d\n",n,r,ncr(n,r));
  return 0;
}