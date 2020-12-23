#include <algorithm>
#include <vector>
#include <iostream>
#include <iterator>
using namespace std;
/* Normal array declaration vs using new has only one diffenrnce which stablishhes dynamic nature and new declared array must be deallocated by programmer
 */
int main(int argc, char** argv)
{
    int len = 100;
    int arr[10];
    arr[199] = 90;
    cout<<arr[199]<<endl;
    int *ptr;
    ptr = new int;
    *ptr = len;//same as 1
    int *ln = new int(10);//pointer initialized with value 10 // 1
    ln[0] = 9;
    ln[100] = 10; // how is this possible
    cout<<ln[100]<<endl;
    int *p = new int;//pointer initialized as NULL // 2
    int *k = NULL;
    k = new int; // same as 2
    int *pr = new int[10]; //allocate block of memory , subscript can be used like pr[0] = 19;
    cout<<*ptr<<endl;
    cout<<*ln<<endl;
    cout<<*p<<endl;
    delete ptr;
    delete ln;
    delete k;
    delete p;
    delete[] pr;
    
    return (0);
}
