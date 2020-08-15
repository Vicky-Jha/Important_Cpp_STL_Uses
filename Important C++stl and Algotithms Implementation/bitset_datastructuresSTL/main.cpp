
//A bitset is an array whose each value is either 0 or 1.
#include <iostream>
//#include <set>

using namespace std;

int main(int argc, const char * argv[]) {
    
    bitset<10> s;
    s[1] = 1;
    s[3] = 1;
    s[4] = 1;
    s[7] = 1;
    cout << s[4] << "\n"; // 1
    cout << s[5] << "\n"; // 0
    bitset<10> s1(string("0010011010")); // from right to left
    cout << s1[4] << "\n"; // 1
    cout << s1[5] << "\n"; // 0
    cout << s1.count()<<"\n";
    
    bitset<10> a(string("0010110110"));
    bitset<10> b(string("1011011000"));
    cout << (a&b) << "\n"; // 0010010000
    cout << (a|b) << "\n"; // 1011111110
    cout << (a^b) << "\n"; // 1001101110

    return 0;
}
