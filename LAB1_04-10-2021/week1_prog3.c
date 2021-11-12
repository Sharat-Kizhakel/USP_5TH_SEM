#include<stdio.h>

int main()
{
    int x;
    float total_bill=0.0;
    float discounted_bill=0.0;
    printf("Enter the number of items:\n");
    scanf("%d",&x);
    float rates[x];
    int qty[x];
    printf("****QUANTITY*****\n");
    for(int i=0;i<x;i++)
    {
      printf("Enter quantity of item [%d]:\n",i);
      scanf("%d",&qty[i]);
    }
    printf("****RATES*****\n");
    for(int i=0;i<x;i++)
    {
      printf("Enter rate of item [%d]:\n",i);
      scanf("%f",&rates[i]);
    }
    
    for(int i=0;i<x;i++)
    {
        total_bill+=(double)(rates[i]*qty[i]);
        
    }
    
    if(total_bill>=10000)
    {
   discounted_bill=total_bill-(double)0.05*total_bill;
    }
    else if(total_bill>=7500&&total_bill<10000)
    {
discounted_bill=total_bill-(double)0.03*total_bill;
    }
    else if(total_bill>=5000&&total_bill<7500)
    {
discounted_bill=total_bill-(double)0.02*total_bill;
    }
    else
    {
        printf("Discount not applicable\n");
        discounted_bill=total_bill;
    }
printf("\n************************************\n");
printf("The total bill amount is:%.2f\n",total_bill);
printf("The discounted bill amount is:%.2f\n",discounted_bill);

}