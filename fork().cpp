#include <iostream>
#include <sys/types.h>
#include <unistd.h>
using namespace std;

int main()
{
    int pid = fork();
    if(pid == 0){
        printf("This is Child process\nchilds pid = %d\n parents pid = %d\n",getpid() , getppid());

    }else{
        printf("This is Parent process\nchilds pid = %d\n parents pid = %d\n",getpid() , getppid());
    }
    
    return 0;
}
