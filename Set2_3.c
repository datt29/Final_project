#include <stdio.h>
#include <stdbool.h>
int main()
{
    unsigned int inp_number,rev_number=0,factor=1;
    int i;
    bool inp_number_bits[4];
    printf("enter number:");
    scanf("%d",&inp_number);
    printf("\n%d = ",inp_number);
    for(i=3;i>=0;i--)
    {
        inp_number_bits[i]=(bool)(inp_number & factor);
        inp_number=inp_number>>factor;
        
    }
    for(i=0;i<4;i++)
    {
        printf("%d",(int)inp_number_bits[i]);
        if((i+1)%8==0)
        {
            printf(" ");
        }
    }
    printf("\n");
    printf("reverse of Binary number is:\n");
    for(i=0;i<4;i++)
    {
        printf("%d",(int)inp_number_bits[3-i]);
        if((i+1)%8==0)
        {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}