// C program to reverse a string

// array reverce
#include <stdio.h>


int main() {
    
    int n,i,rev,rem;
    printf("enter array length:");
    scanf("%d",&n);
    
    int a[n];
    
      for(i=0;i<n;i++)
      {
        scanf("%d",&a[i]);
      }
      for(i=n-1;i>=0;i--)
      {
        printf("%d",a[i]);
      }
   
    return 0;
}