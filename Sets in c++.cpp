//
//  main.cpp
//  Sets in c++
//
//  Created by Vicky_Jha on 18/03/20.
//  Copyright © 2020 test. All rights reserved.
//
//Elements in the sets get sortedin accending order automatically with eliminating repeated values
#include <iostream>
#include <set>
using namespace std;
int main(int argc, const char * argv[]) {
    set<int> s;
    s.insert(3);
    s.insert(2);
    s.insert(5);
    cout << s.count(3) << "\n"; // 1
    cout << s.count(4) << "\n"; // 0
    s.erase(3);
    s.insert(4); // function insert never inserts value that is already present
    cout << s.count(3) << "\n"; // 0
    cout << s.count(4) << "\n"; // 1

    set<int> s1 = {9,8,7,6,6,5,4,3,3,2,1};//set containing repeated values will not be displayed
    //    s1[4] = 10; the type set doesn't provide subscript operator
    cout << s1.size() << "\n"; // 4
    for (auto x : s1) {/*The auto keyword specifies that the type of the variable that is being declared will be automatically deducted from its initializer. In case of functions, if their return type is auto then that will be evaluated by return type expression at runtime. It can be very useful when we have to use the iterator.*/
    cout << x << "\n";
    }
    multiset<int> s2;
    s2.insert(5);
    s2.insert(5);
    s2.insert(5);
    cout << s2.count(5) << "\n"; // 3

    s2.erase(5);
    cout << s2.count(5) << "\n"; // 0

    s2.erase(s2.find(5));
    cout << s2.count(5) << "\n"; // 2

    
    set<int> ss3 = {1,1,1,1,1};
    cout<<"ss3 count 1  = "<<ss3.count(1)<<"Size of ss3 = "<<ss3.size()<<"\n";
    
    
    set<int> s11;                               // Empty Set
    int a[]= {1, 2, 3, 4, 5, 5};
    set<int> s22 (a, a + 6);                    // s2 = {1, 2, 3, 4, 5}
    set<int> s33 (s22);                          // Copy of s2
    set<int> s44 (s33.begin(), s33.end());         // Set created using iterators
    
    return 0;
}
//we have unordered_set as well as unordered_multiset
//multisets we can have same values rest is same as sets

//The Unordered_set allows only unique keys but it can be in any order, for duplicate keys unordered_multiset should be used , but it can be in any order
