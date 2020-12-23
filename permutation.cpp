#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public :
    vector <vector< int >> permute(vector< int >& num) {
        vector <vector< int >> res;
        permuteDFS(num, 0 , res);
        return res;
    }
    void permuteDFS(vector< int >& num, int start, vector<vector< int >>& res) {
        if (start >= num.size()) res.push_back(num);
        for ( int i = start; i <num.size(); ++ i) {
            swap(num[start], num[i]);
            permuteDFS(num, start + 1 , res);
            swap(num[start], num[i]);
        }
    }
};
int main()
{
    vector<int> num = {1,2,3};
    Solution s;
    vector < vector < int >> res = s.permute(num);
    for(int i=0 ; i<res.size() ; i++){
        for(int j=0 ; j<res[i].size() ; i++)
        {
            cout<<res[i][j]<<" ";
        }cout<<"\n";}
}
