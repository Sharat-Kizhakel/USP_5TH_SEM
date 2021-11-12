//Find sum of odd and even indices values
#include<stdio.h>
int main()
{
    int values[50],n;
    int sum_even=0;
    int sum_odd=0;
    printf("Enter the array size:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter element [%d]:",i);
        scanf("%d",&values[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
         sum_even+=values[i];
        }
        else
        {
        sum_odd+=values[i];
        }
    }
    printf("--------------------\n");
    printf("The sum of even indices is:");
    printf("%d\n",sum_even);
    printf("--------------------\n");
    printf("The sum of odd indices is:");
    printf("%d\n",sum_odd);
    
    return 0;
}