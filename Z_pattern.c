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
    for(int i=0;i<5;i++)
    {
        printf("%c",a[i]);
    }
    printf("\n");
    for(int i=3;i>=1;i--)
    {
        for(int k=1;k<=i;k++)
        {
            printf(" ");
        }
        printf("%c\n",a[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("%c",a[i]);
    }
}


