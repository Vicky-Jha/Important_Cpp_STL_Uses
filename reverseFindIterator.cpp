#include <algorithm>
#include <vector>
#include <iostream>
#include <iterator>

using namespace std;

int main(int argc, char** argv)
{
    vector<int> myVector;
    myVector.push_back(1);
    myVector.push_back(2);
    myVector.push_back(3);
    myVector.push_back(4);
    myVector.push_back(5);
    
    int num = 4;
    
    vector<int>::iterator it1;
    vector<int>::reverse_iterator it2;
    it1 = find(myVector.begin(), myVector.end(), num);
    it2 = find(myVector.rbegin(), myVector.rend(), num);
    
    if (it1 != myVector.end()) {
        cout << num << " : position " << it1 - myVector.begin() << " going forward.\n";
        cout << num << " : position " << it2.base() - 1 - myVector.begin() << " going backward.\n";
    } else {
        cout << "Failed to find " << num << endl;
    }
    
    return (0);
}
