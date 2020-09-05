#include <stdio.h>
#include<sys/wait.h> 
#include<unistd.h> 

int main(){
    pid_t child_pid;
    child_pid=fork();
    if(child_pid==0){ 
        child_pid=fork();
        if(child_pid==0){ 
            child_pid=fork(); 
        }
    }
    else{ 
        child_pid= 0;
        child_pid=fork(); 
        if(child_pid==0){ 
            child_pid=fork(); 
            if(child_pid>0){
                fork();
            }
        }
    }
}
