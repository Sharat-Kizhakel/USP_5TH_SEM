#include<stdio.h>
int main()
{
    int values[50],n;
    int odd[50];
    int even[50];
    int j=0;
    int k=0;
    printf("Enter size of the array:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter value[%d]:",i);
        scanf("%d",&values[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(values[i]%2==0)
        {
             even[j]=values[i];
             j++;
        }
        else
        {
               odd[k]=values[i];
               k++;
        }
    }
    printf("\n Even elements are : \n");
    for(int i=0;i<j;i++)
    {
	printf("%d ",even[i]);
    }
     printf("\n***********************\n");
    printf("\n Odd elements are :\n");
    for(int i=0;i<k;i++)
    {
	printf("%d ", odd[i]);
    }

}