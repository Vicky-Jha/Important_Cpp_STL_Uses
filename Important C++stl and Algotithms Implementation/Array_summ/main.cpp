#include <iostream>
using namespace std;


int main() {
    int n;
    cin >> n;
    int cpos = 0, cmin = 0, czero = 0;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (num < 0) cmin++;
        else if (num > 0) cpos++;
        else czero++;
        
    }
    cout << static_cast<float> (cpos) / n << endl << static_cast<float> (cmin) / n << endl << static_cast<float> (czero) / n << endl;
    return 0;
    
}
