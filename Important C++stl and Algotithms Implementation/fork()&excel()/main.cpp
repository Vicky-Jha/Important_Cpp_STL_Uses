#include <iostream>
#include <unistd.h>

#include <sys/types.h>
using namespace std;
int main()
{
    int pid = fork();
    if(pid == 0){
        execl("/bin/ls", "-al" , "/etc" , NULL);
        printf("Child after excel()\n");
    }
    else{
        printf("Parent\n");
    }
    return 0;
}
