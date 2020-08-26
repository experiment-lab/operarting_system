// A process whose parent process no more exists 
// i.e. either finished or terminated without waiting for its child process 
// to terminate is called an orphan process.

// output of this program
// parent process
// printing triangle of numbers :
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// child process becomes orphan because its goes to sleep 30s and parent returns exit(0)
// before execution of child process
 
#include<bits/stdc++.h> 
#include <sys/types.h> 
#include <unistd.h> 

using namespace std;

int main() 
{ 
	// Create a child process	 
	int pid = fork(); 

	if (pid > 0){
		printf("in parent process");
		int rows = 4;

		cout << "printing triangle of numbers : ";

		for(int i = 1; i <= rows; ++i)
		{
		    for(int j = 1; j <= i; ++j)
		    {
			cout << j << " ";
		    }
		    cout << "\n";
		}
	}
	 
	                                    // Note negative if fork() fails 
	else if (pid == 0)                 // and that pid is 0 in child process
	{ 
		sleep(30); 
		printf("in child process");
        
		char input = 'D', alphabet = 'A';

		cout << "printing triangle of alphabets: ";
		cin >> input;

		for(int i = 1; i <= (input-'A'+1); ++i)
		{
		    for(int j = 1; j <= i; ++j)
		    {
			cout << alphabet << " ";
		    }
		    ++alphabet;

		    cout << endl;
		}
	} 

	return 0; 
}
