//Elements in map are always in sorted order by their corresponding key and can be accessed directly by their key using bracket operator ([ ]).
//In map mp , the values be will be in sorted order according to the key.
#include <iostream>
#include <map>
using namespace std;
int main(int argc, const char * argv[]) {
    
    map<string,int> m;
    m["monkey"] = 4;
    m["banana"] = 3;
    m["harpsichord"] = 9;
    cout << m["banana"] << "\n"; // 3
    cout<<m["ayababtu"] <<"\n";
    cout<<m["lau1"] <<"\n";
    
    if (m.count("ayababtu")) { // key exists
        cout<<"Key of value aybabtu exits\n";
    }
    
    for (auto x : m) {
        cout << x.first << " " << x.second << "\n";
    }


    return 0;
}
//we have unordered maps as well
