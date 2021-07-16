/*

~ Fibonacci Series Pattern

1
1 2
3 5 8
13 21 34 55
.........(n)
*/
#include<stdio.h>
int main() {
  unsigned long int i, j,n,a=1,b=0,p;
  scanf("%lu",&p);
  for (i = 1; i <=p; i++) {
    for (j = 1; j <=p; j++) 
    {
      if (j<=i){
      n=a+b;
      a=b;
      b=n;
        printf("%lu  ",n);
      } else {
        printf("  ");
      }
    }
    printf("\n");
  }
  return 0;
}
