/*
*where parent and child execute:
*a) same program, same code.
*/
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(){
    pid_t pid, p;
    p = fork();
    pid = getpid();

    if(p<0){
        fprintf(stderr,"fork failed");
        return 1;
    }
    printf("Output of fork id : %d \n",p);
    printf("Process id is : %d \n", pid);

    return 0;

}