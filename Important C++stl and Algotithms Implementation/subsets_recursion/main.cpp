# include <iostream>
# include <vector>
using namespace std;
vector<int> subset;
void search(int k){
    if(k == 3){
        return;
    }else{
        search(k+1);
        subset.push_back(k);
        search(k+1);
        subset.pop_back();
    }
}

int main()
{
    
    search(3);
    
    for(auto x : subset)
        cout<<x<<"\n";
    
    return 0;
}
