//
//  main.cpp
//  generate all combinations Easier Approach by using subset theme
//
//  Created by Vicky_Jha on 29/07/20.
//  Copyright © 2020 test. All rights reserved.
//
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> combine(int n, int k) {
    vector< vector<int>> res;
    vector<int> v;
    for(int m = 0 ; m<(1 << n) ; ++m)
    {
        for(int i=0 ; i<n ; ++i)
        {
            if(m & (1 << i))
            {
                v.push_back(i+1);
            }
        }
        if(v.size() == k)
            res.push_back(v);
        v.clear();
    }
    return res;
}
int main()
{
    int n , k;
    cin>>n>>k;
    vector< vector <int>> res = combine(n , k);
    for(int i=0 ; i<res.size() ; i++){
        for(int j=0 ; j<k ; ++i)
        {
            cout<<res[i][j]<<" ";
        }
    cout<<" \n";
}
    return 0;
}
