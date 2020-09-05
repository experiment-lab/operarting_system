// C++ program to demonstrate creating processes using fork() 
// output will be random with parent
// and child's printing order. so, we will print this
// multiple times to see outcomes

#include <unistd.h> 
#include <stdio.h> 

int main() 
{ 
	// Creating first child 
	int n1 = fork(); 

	// Creating second child. First child 
	// also executes this line and creates 
	// grandchild. 
	int n2 = fork();
	
    for(int i=0;i<5;i++ ){
        
       printf("%d'loop for printing sequence \n",i);
       
    	if (n1 > 0 && n2 > 0) { 
    		printf("parent\n"); 
    		printf(" %d %d \n", n1, n2); 
    		printf(" my id is %d \n", getpid()); 
    	} 
    	else if (n1 == 0 && n2 > 0) 
    	{ 
    		printf("First child\n"); 
    		printf(" %d %d \n", n1, n2); 
    		printf("my id is %d \n", getpid()); 
    	} 
    	else if (n1 > 0 && n2 == 0) 
    	{ 
    		printf("Second child\n"); 
    		printf(" %d %d \n", n1, n2); 
    		printf("my id is %d \n", getpid()); 
    	} 
    	else { 
    		printf("third child\n"); 
    		printf(" %d %d \n", n1, n2); 
    		printf(" my id is %d \n", getpid()); 
    	} 
    }
	return 0; 
}  
