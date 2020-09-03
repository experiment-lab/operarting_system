#include <stdio.h> 
#include <stdlib.h>    
#include <pthread.h>
#include <limits.h>

int fib[100000];

void* myThread(void *a){
	
	printf("Calculation in thread\n");
	int n = *((int *) a);

	
	if(n==1)
	{
	    fib[0]=0;
	}
	if(n==2)
	{
	    fib[0]=0;
	    fib[1]=1;
	}
	else{
	   fib[0]=0;
	   fib[1]=1;  
	   int i;
	for ( i=2; i<n; i++){
		fib[i] = fib[i-1]+ fib[i-2];
	  }
	}
}


int main(void)
{   
    int n;
    scanf("%d" , &n);
    pthread_t thread;
    printf("Before thread\n");
    int *k = (int *)malloc(sizeof(*k));
    *k=n;
    pthread_create(&thread, NULL, myThread, (void *) k);
    pthread_join(thread, NULL); 
    printf("After thread\n");
    for(int i =0;i<n;i++)
    {
        printf("%d ", fib[i]);
    }
    printf("\n");
    return 0;
}
