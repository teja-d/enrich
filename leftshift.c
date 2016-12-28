#include <stdio.h>

void main() {
 int n,r,a,b;
 printf("enter n value\n");
 scanf("%d",&n);
 printf("\nenter number of rotations");
 scanf("%d",&r);
 while(r>0)
 {
     a=n%10000;
     b=n/10000;
     n=b+a*10;
    r--;
  }
 printf("\nafter rotation%d",n);
}

