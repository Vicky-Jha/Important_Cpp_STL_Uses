//Vector is the most popular dynamic array in c++ STL

#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)

void deleteZeroes(vector<int>& nums) {
    vector<int>:: iterator i;
    for(i=nums.begin() ; i != nums.end() ; i++)
    {
        if(*i == 0)
            nums.erase(i);
    }
    for(auto x : nums)
        cout<<x<<" ";
}

int main(int argc, const char * argv[]) {

//    v.PB(MP(y1,x1));
//    v.PB(MP(y2,x2));
//    int d = v[i].F+v[i].S;

   /* REP(i,1,n) {
        search(i);
    }*/
    
    
    std::vector<int> v = {10 , 20 , 30 , 40};
    v[4] = 50;
    for(int i =0 ; i<v.size() ; i++)
        std::cout<<v[i]<<"\n";
    
    std::string a = "hatti";
    std::string b = a+a;
    std::cout << b << "\n"; // hattihatti
    b[5] = 'v';
    std::cout << b << "\n"; // hattivatti
    std::string c = b.substr(3,4);
    std::cout << c << "\n"; // tiva
    
    
    for (auto x : v) {
        std::cout << x << "\n";
    }
    int n=0;
    vector<vector<int> > result( (n) , vector<int> (n));  // 2 dimensional vector of n rows and m columns
    
    vector<int> a1;                                       // empty vector of ints
    vector<int> b1 (5, 10);                                // five ints with value 10
    vector<int> c1 (b1.begin(),b1.end());                     // iterating through second
    vector<int> d1 (c1);                                   // copy of c //******//
    
    vector<int> vect = { 0 , 1, 2 ,0 ,3 };
    deleteZeroes(vect);
    return 0;

}
