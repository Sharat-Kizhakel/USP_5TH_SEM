/*accept student details like usn, name and cgpa. 
Create an array of n students. Write the same into a data file and print the students with cgpa < 5.0.*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct Student{
char usn[10];
char name[20];
char cgpa[10];
} student;

int main()
{
  int n;
    FILE *fp;
    fp=fopen("student.txt","a");
student std[20];
char str[100];
char ch='\n';
float gpa;
printf("Please enter no of students:");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
printf("Please enter your usn[%d]:\n",(i+1));
 scanf("%s",std[i].usn);
fputs(strncat(std[i].usn,&ch,1) , fp);
printf("Please enter your name[%d]:\n",(i+1));
 scanf("%s",std[i].name);
fputs(strncat(std[i].name,&ch,1) , fp);
printf("Please enter your cgpa[%d]:\n",(i+1));
 scanf("%s",std[i].cgpa);
fputs(strncat(std[i].cgpa,&ch,1), fp);
}
fclose(fp);
printf("Students with less than 5 cgpa\n");
for(int i=0;i<n;i++)
{
gpa=atoi(std[i].cgpa);
if(gpa<5.0)
{
printf("%s",std[i].name);
}
}
}