// Write a C/C++ program to that outputs the contents of its environment list 
#include <stdio.h>
int main(int argc, char *argv[], char * envp[])
{
    int i;
    for (i = 0; envp[i] != NULL; i++)
        printf("\n%s", envp[i]);
    getchar();
    return 0;
}