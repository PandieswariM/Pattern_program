/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char a[]={'P','A','N','D','I'};
    for(int i=4;i>=0;i--)
    {
            for(int j=4;j>i;j--)
            {
                printf(" ");
            }
            printf("%c",a[i]);
            for(int j=1;j<i*2;j++)
            {
                printf(" ");
            }    
            if(i>=1)
            printf("%c",a[i]);
            printf("\n");
    }
}


