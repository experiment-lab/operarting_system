#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
void forkexecution(int k) 
{ 
    // child process because return value zero 
    if (fork() == 0){
        printf("\nFrom Child!,Sum of digits of number\n");
        int n=k,sum=0,m;    
        //printf("Enter a number:");    
        //scanf("%d",&n);    
        while(n>0)    
        {    
            m=n%10;    
            sum=sum+m;    
            n=n/10;    
        }    
        printf("Sum is=%d \n",sum);   
    }
    // parent process because return value non-zero. 
    else{
        printf("\nFrom Parent!,Reversing the number\n"); 
        int n=k, reverse=0, rem;    
        //printf("Enter a number: ");    
        //scanf("%d", &n);    
        while(n!=0)    
        {    
            rem=n%10;    
            reverse=reverse*10+rem;    
            n/=10;    
        }    
         printf("Reversed Number: %d \n",reverse); 
    }
} 
int main() 
{ 
    int k;
    printf("Enter a num : ");
    scanf("%d",&k);
    forkexecution(k); 
    return 0; 
} 
