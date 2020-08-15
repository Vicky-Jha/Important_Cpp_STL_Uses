//to check if target = W here is equal to sum of sub array ;

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> dpArr;
    
    
    queue<int> q;
    int pointer = 0;
    
    q.push((int)dpArr.size() - 1);
    dpArr[q.back()] = 0;
    
    while(!q.empty()) {
        int workOn = q.back();
        q.pop();
        
        if(workOn + 1 < dpArr.size() && dpArr[workOn + 1] > pointer + 1) {
            dpArr[workOn + 1] = pointer + 1;
            q.push(workOn + 1);
        }
        
        if(workOn - 1 >= 0 && dpArr[workOn - 1] > pointer + 1) {
            dpArr[workOn - 1] = pointer + 1;
            q.push(workOn - 1);
        }
        
        for(int i = 0; i < dpArr.size(); ++i) {
            if(dpArr[i] == dpArr[workOn] && dpArr[i] > pointer + 1) {
                dpArr[i] = pointer + 1;
                q.push(i);
            }
        }
        
    }
    
    return dpArr[0];
    
    return 0;
}
//in this way we will explore all the possibilities , i.e. all possible sums of various subsets
