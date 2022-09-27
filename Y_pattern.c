/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

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
    for(int i=1;i<5;i++)
    {
        for(int j=1;j<5;j++)
        {
            printf(" ");
        }
        printf("%c\n",a[i]);
    }
}


