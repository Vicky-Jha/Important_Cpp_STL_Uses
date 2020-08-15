#include <iostream>
#include <vector>
using namespace std;
void passValue(string &str) // same note as vector
{
    str += " 2 ";
    cout<<str<<endl;
}
void pass(int *arr) // c++ handles arrays differently than vector
{
    arr[0] = 100;
}
void passVec(vector<int> &v) // here by using & we are modifying actual vector
{
    v[0] = 100;
}
void passVec(vector<int> v) // here without using & we are making a copy of actual vector and modifiing the vector limited to this function , i.e. when function is over then copy of vector and its modification will be deleted , so actual vector will remain the same
{
    v[0] = 100;
}

int main()
{
    string str = "hello";
    passValue(str);
    str += "world";
    cout<<str<<endl;
    
    int arr[] = {1 ,2 ,3 ,4 ,5};
    vector <int> v = {1 ,2 ,3 ,4 ,5};
    
    pass(arr);
    for(auto i : arr)
        cout<<i<<" ";
    cout<<endl;
    passVec(v);
    for(auto i : v)
        cout<<i<<" ";
    cout<<endl;
    
    return 0;
}
