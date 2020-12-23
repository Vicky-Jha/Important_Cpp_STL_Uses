//Our task is to calculate the number of elements that belong
//44
//to both of the lists. For example, for the lists
//A = [5,2,8,9,4] and B = [3,2,9,5],
//the answer is 3 because the numbers 2, 5 and 9 belong to both of the lists.

#include <iostream>
#include <unordered_set>
using namespace std;
int main(int argc, const char * argv[]) {
 
    unordered_set<int> s,s1;
    int input , n , m , count=0;
    cout<<"Enter size of array A\n";
    cin>>n;
    cout<<"Enter size of array B\n";
    cin>>m;
    cout<<"Enter array A elements\n";
    for(int i=0 ; i<n ; i++){
        cin>>input;
        s.insert(input);
    }
    cout<<"Enter array B elements\n";
    for(int i=0 ; i<m ; i++){
        cin>>input;
        s1.insert(input);
    }
    for(int i : s)
        cout<<i<<" ";
        cout<<endl;
    for(auto x : s){
        if(s1.count(x))
            count++;
    }//algorithm 1; O(nlogn) complexity using set
    //algorithm 2; O(n) complexity using unordered_set
    //
    cout<<count<<"\n";
    return 0;
}
