//Find no of pos and neg nos and zeros 
#include<stdio.h>
int main()
{
    int values[50],n;
    int neg_count=0;
    int pos_count=0;
    int zero_count=0;
    printf("Enter size of the array:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter value[%d]:",i);
        scanf("%d",&values[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(values[i]>0)
        {
         pos_count+=1;
        }
        else if(values[i]<0)
        {
           neg_count+=1;
        }
        else if(values[i]==0)
        {
           zero_count+=1;
        }
    }
    printf("The count of positive nos is: %d\n",pos_count);
    printf("The count of negative nos is: %d\n",neg_count);
    printf("The count of zeros is: %d\n",zero_count);

}