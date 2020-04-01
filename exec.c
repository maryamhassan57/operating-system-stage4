/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
printf("im in exec\n");
printf("p id of exec.c is \n ", getpid());
char*args[]={"\n hello",NULL};
execv(args[0],args);
printf("coming back to execv.c");
return 0; 
    
}
 

 