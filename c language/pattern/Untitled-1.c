#include <stdio.h>

int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
         
            if(j<=i)
            {
                printf(" %d ",(11-i)*(11-i));
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}