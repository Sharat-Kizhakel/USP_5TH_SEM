
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main ()
{
  FILE * fptr;
  int i,n;
  char str[100];
  char fname[20]="test.txt";
  char str1;
  
    
	printf("\n :: The lines are ::\n");
	fptr = fopen (fname,"w"); 
	for(i = 0; i < 2;i++)
		{
        printf("Enter the id[%d]:\n",i);
		fgets(str, sizeof str, stdin);
		 fputs(str, fptr);
        printf("Enter the name[%d]:\n",i);
        fgets(str, sizeof str, stdin);
	    fputs(str, fptr);
        printf("Enter the salary[%d]\n",i);
        fgets(str, sizeof str, stdin);
		fputs(str, fptr);
        
		}
  fclose (fptr);

	fptr = fopen (fname, "r");  
	printf("\n The content of the file %s is  :\n",fname);
	// str1 = fgetc(fptr);
    int c=0;
    int l=0;
    int salary[4];
    char arr[40];
    char name[2][40]={"",""};
	while (fgets(arr,sizeof(arr),fptr))
		{
            if(c==2||c==5)
            {
               salary[l]=atoi(arr);
               l++;
            }
            if(c==1)
            {
               strcat(name[0],arr);
            }
            if(c==4)
            {
                strcat(name[1],arr);
            }
            printf("%s",arr);
			//  printf ("%c", str1);
            //  str1 = fgetc(fptr);
            c++;

          
        }
        fclose (fptr);
    printf("\n\n");
    
        if(salary[0]<salary[1])
        {
            printf("Higher salary is:%s",name[1]);
        }
        else
        {
            printf("Higher Salary is:%s",name[0]);
        }
    
    
    
    return 0;
}
