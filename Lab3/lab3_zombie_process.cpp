// A C program to demonstrate Zombie Process. 
// Child becomes Zombie as parent is sleeping 
// when child process exits.


#include <bits/stdc++.h>
#include <stdlib.h> 
#include <sys/types.h> 
#include <unistd.h> 

using namespace std;

int main() 
{ 
	// Fork returns process id 
	// in parent process 
	pid_t child_pid = fork(); 

	// Parent process 
	if (child_pid > 0){ 
		sleep(10);
		cout<<"Child process becomes Zombie process for 10s...";
    }
	// Child process 
	else{
	    char input='E', alphabet = 'A';

        cout << "Print the triangle of alphabet: "<<endl;
    
        for(int i = 1; i <= (input-'A'+1); ++i)
        {
            for(int j = 1; j <= i; ++j)
            {
                cout << alphabet << " ";
            }
            ++alphabet;
    
            cout << endl;
        }
		exit(0); 
		
	}

	return 0; 
} 
