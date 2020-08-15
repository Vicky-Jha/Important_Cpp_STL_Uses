

//A deque is a dynamic array whose size can be efficiently changed at both ends of the array.
//Like a vector, a deque provides the functions push_back and pop_back, but it also includes the functions push_front and pop_front which are not avail- able in a vector.
//*****a deque is slower than a vector.
#include <iostream>
//#include <set>
#include <deque>
using namespace std;

int main(int argc, const char * argv[]) {
    
    deque<int> d;
    d.push_back(5);
    d.push_back(6);
    d.push_front(4);
    d.push_front(3);
    d.pop_back();
    d.pop_front();
    
    for(auto x: d)
        cout<<x<<" "<<"\n";
    
    return 0;
}
