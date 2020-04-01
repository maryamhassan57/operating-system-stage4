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
 
 int p ; //hold process ID;
 p=fork(); //  child process
 if(p==0)//  proces child (process ID child =0 )
 { 
 printf("fork the  child  with process ID %d \n",getpid());
int i=3,m=6,s=i+m;
 printf(" s=i+m = %d \n ",s);
 }
if(p>0)// process parent 
 { 
 printf(" parent fork with process ID %d \n",getpid());

 }
 
 return 0; 
}
 