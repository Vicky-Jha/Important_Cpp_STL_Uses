
//Forward list in STL implements singly linked list.
//Forward List is preferred over list when only forward traversal is required (same as singly linked list is preferred over doubly linked list) as we can save space.
//It differs from list by the fact that forward list keeps track of location of only next element while list keeps track to both next and previous elements, thus increasing the storage space required to store each element. The drawback of forward list is that it cannot be iterated backwards and its individual elements cannot be accessed directly.

#include<iostream>
#include<forward_list>
using namespace std;

int main()
{
    // Declaring forward list
    forward_list<int> flist1;
    
    // Declaring another forward list
    forward_list<int> flist2;
    
    // Assigning values using assign()
    flist1.assign({1, 2, 3});
    
    // Assigning repeating values using assign()
    // 5 elements with value 10
    flist2.assign(5, 10);
    
    // Inserting value using push_front()
    // Inserts 60 at front
    flist1.push_front(60);
    
    
    // Deleting first value using pop_front()
    // Pops 70
    flist1.pop_front();
    
    // Removing element using remove()
    // Removes all occurrences of 40
    flist2.remove(10);
    
    // Displaying forward lists
    cout << "The elements of first forward list are : ";
    for (auto a : flist1)
        cout << a << " ";
    cout << endl;
    
    cout << "The elements of second forward list are : ";
    for (int&b : flist2)
        cout << b << " ";
    cout << endl;
    
    return 0;
}


