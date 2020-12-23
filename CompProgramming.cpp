#include <iostream>
#include <vector>
using namespace std;
vector<int> returnPoints(vector<int> a , vector<int> b)
{
    vector<int> res(2,0);
    for(int i=0 ; i<3 ; i++)
    {
        if(a[i] < b[i])
            res[0]++;
        else if(a[i] > b[i])
            res[1]++;
    }
    return res;
}
int main()
{
    
    vector<int> a(3),b(3),result;
    for(int i=0 ; i<3 ; i++)
        cin>>a[i];
    for(int i=0 ; i<3 ; i++)
        cin>>b[i];
    result = returnPoints(a,b);
    cout<<result.size()<<endl;
    for(int i=0 ; i<result.size() ; i++)
    {
        cout<<result[i]<<" "<<endl;
    }
    
    return 0;
}
