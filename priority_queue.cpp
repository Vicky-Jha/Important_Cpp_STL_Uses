
//A priority queue is usually implemented using a heap structure that is much simpler than a balanced binary tree used in an ordered set.
//By default, the elements in a C++ priority queue are sorted in decreasing order, and it is possible to find and remove the largest element in the queue.


//A priority queue is a container that provides constant time extraction of the largest element, at the expense of logarithmic insertion. It is similar to the heap in which we can add element at any time but only the maximum element can be retrieved. In a priority queue, an element with high priority is served before an element with low priority.
#include <iostream>
#include <queue>

using namespace std;

int main()
{
    priority_queue<int> pq;
    pq.push(10);
    pq.push(20);
    pq.push(5);
    while(!pq.empty())
    {
        cout << pq.top() << endl;
        pq.pop();
    }
    return 0;
}
//Output:
//
//20
//10
//5




//
//Some member functions of priority queues are:
//empty(): Returns true if the priority queue is empty and false if the priority queue has at least one element. Its time complexity is O(1).
//pop(): Removes the largest element from the priority queue. Its time complexity is O(logN) where N is the size of the priority queue.
//push(): Inserts a new element in the priority queue. Its time complexity is O(logN) where N is the size of the priority queue.
//size(): Returns the number of element in the priority queue. Its time complexity is O(1).
//top(): Returns a reference to the largest element in the priority queue. Its time complexity is O(1).
//
