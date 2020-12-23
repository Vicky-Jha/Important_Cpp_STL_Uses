#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 3;
    vector<int> subset;
    subset.push_back(1);
    for (int b = 0; b < (1<<n); b++) {
        vector<int> subset;
        for (int i = 0; i < n; i++) {
            if (b&(1<<i)) subset.push_back(i); }
    }
    for ( auto x : subset)
        cout<<x<<"\n";
    return 0;
}
