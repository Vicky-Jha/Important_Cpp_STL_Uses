
#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    string s0;                                       // s0 = “”
    string s1("Hello");                               // s1 = “Hello”
    string s2 (s1);                                  // s2 = “Hello”
    string s3 (s1, 1, 2);                            // s3 = “el”
    string s4 ("Hello World", 5);                     // s4 = “Hello”
    string s5 (5, '*');                              // s5 = “*****”
    string s6 (s1.begin(), s1.begin()+3);              // s6 = “Hel”
    s0 = s0 + "1";
    int c = 100;
    string res = to_string(c);
    for(int i=0 ; i<res.size() ; i++)
    cout<<res[i]<<endl;
    cout<<s0<<endl;
    return 0;
}
