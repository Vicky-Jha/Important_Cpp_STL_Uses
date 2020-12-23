//
//  main.cpp
//  checkAllNegative
//
//  Created by Vicky_Jha on 11/05/20.
//  Copyright © 2020 test. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;


bool isNegativeAll(const vector<int> A)
{
    if(all_of(A.begin(),A.end(), [](int x) { return x<0; }))
        return true;
    else
        return false;
}
bool areSame(vector<int> A,int n)
{
    unordered_map<int,int> m;
    
    for(int i=0;i<n;i++)
        m[A[i]]++;
    
    if(m.size()==1)
        return true;
    else
        return false;
}
int main(int argc, const char * argv[]) {

    return 0;
}
