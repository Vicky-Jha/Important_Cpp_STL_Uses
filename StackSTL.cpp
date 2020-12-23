



//A stack is a data structure that provides two O(1) time operations: adding an element to the top, and removing an element from the top. It is only possible to access the top element of a stack.
//The following code shows how a stack can be used:


#include <iostream>
#include <stack>

using namespace std;
int main( )
{
    stack <int> s;  // declaration of stack
    
    //inserting 5 elements in stack from 0 to 4.
    for(int i = 0;i < 5; i++)
    {
        s.push( i ) ;
    }
    
    //Now the stack is {0, 1, 2, 3, 4}
    
    //size of stack s
    cout<<”Size of stack is: ” <<s.size( )<<endl;
    
    //accessing top element from stack, it will be the last inserted element.
    cout<<”Top element of stack is: ” <<s.top( ) <<endl ;
    
    //Now deleting all elements from stack
    for(int i = 0;i < 5;i++)
    {
        s.pop( );
    }
    
    //Now stack is empty,so empty( ) function will return true.
    
    if(s.empty())
    {
        cout <<”Stack is empty.”<<endl;
    }
    else
    {
        cout <<”Stack is Not empty.”<<endl;
    }
    
    return 0;
    
}
//Output:
//
//Size of stack is: 5
//Top element of stack is: 4
//Stack is empty.
//


//Some of the member functions of Stack are:
//push( ): Insert element at the top of stack. Its time complexity is O(1).
//pop( ): removes element from top of stack. Its time complexity is O(1).
//top( ): access the top element of stack. Its time complexity is O(1).
//empty( ): checks if the stack is empty or not. Its time complexity is O(1).
//size( ): returns the size of stack. Its time complexity is O(1).
//
