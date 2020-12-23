#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public :
    vector <vector< int >> combine( int n, int k) {
        vector <vector< int >> res;
        vector < int > out (k, 0 );
        int i = 0 ;
        while (i >= 0 ) {
            ++ out [i];
            if ( out [i]> n) --i;
            else  if (i == k- 1 ) res.push_back( out );
            else {
                ++ i;
                out [i] = out [i- 1 ];
            }
        }
        return res;
    }
};
//Using Formula
//class Solution {
//    public :
//    vector <vector< int >> combine( int n, int k) {
//        if (k> n || k < 0 ) return {};
//        if (k == 0 ) return {{}};
//        vector <vector< int >> res = combine(n- 1 , k- 1 );
//        for (auto &a : res) a.push_back(n);
//        for (auto &a: combine(n- 1 , k)) res. push_back(a);
//        return res;
//    }
//};

//int binomialCoeff(int n, int k)
//{
//    // Base Cases
//    if (k == 0 || k == n)
//        return 1;
//
//    // Recur
//    return binomialCoeff(n - 1, k - 1) +
//    binomialCoeff(n - 1, k);
//}
int main()
{
    Solution s;
    vector <vector< int >> res = s.combine(4, 2);
    for(int i = 0 ; i<res.size() ; i++){
        for(int j=0 ; j<res[i].size() ; j++){
            cout<<res[i][j]<<" ";}
        cout<<"\n";}
    return 0;
}
