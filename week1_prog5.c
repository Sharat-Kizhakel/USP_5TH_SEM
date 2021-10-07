/*accept a string from the user.
Create a text file and write the string into the file. Read the string from the file and print it out on the monitor.
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE *f1,*f2;
char ch;
char file_content[30];
f1=fopen("trial.txt","w");
if(f1==NULL)
{
    printf("File cant be created");
    exit(0);
}
printf("Enter some text:\n");
// scanf("%s",file_content);
//fputs(file_content,f1);
while((ch=getchar())!='\n')
{
    fputc(ch,f1);
}
fclose(f1);
f2=fopen("trial.txt","r");

if(f2==NULL)
{
    printf("Cant open file");
    exit(0);
}
printf("File Contents are:\n");
while((ch=fgetc(f2))!=EOF)
{
    printf("%c",ch);
}
fclose(f2);
 return 0;
}