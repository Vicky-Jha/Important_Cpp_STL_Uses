#include <iostream>
#include <unistd.h>
#include <sys/types.h>

using namespace std;

 int main()
{
    unsigned int i =0 ;
    int pid , status;
    pid = fork();
    if(pid ==0){
        while (i < 4294967295U)//prefix U
            i++;
            printf("The child is now terminating\n");
        }else{
            waitpid(pid , &status, 0);
            if(WIFEXITED(status))
                printf("Parent , child terinated normally\n");
            else
                printf("Parent , child terminated abnormally\n");
//            printf("Hello parent\n");
        }
    return 0;
}
