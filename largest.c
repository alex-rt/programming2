//C program Find the largest element using Dynamic Memory Allocation 
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    int limit;
    float *number;

    printf("Input total of numbers to enter(1 to 100): ");
    scanf("%d",&limit);
    number=(float*)calloc(limit,sizeof(float));//Memory is allocated for 'limit'(n) elements 
    if(number==NULL)
    {
        printf("Memory cannot be allocated\n");
        exit(0);
    }
    for(i=0;i<limit;i++)//getting the numbers 
    {
       printf("Enter element No.%d:  ",i+1);
       scanf("%f",number+i);
    }
    for(i=1;i<limit;i++)//finfing the largest number
    {
       if(*number<*(number+i)) 
           *number=*(number+i);
    }
    printf("The Largest number is:  %.2f \n\n",*number);
    return 0;
}
//source:w3resource.com
