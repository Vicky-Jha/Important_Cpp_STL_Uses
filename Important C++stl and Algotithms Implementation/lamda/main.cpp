//9 6
//1 0 0 1 1 0 0 0 1
//1 2 6
//1 4 8
//2 1 9
//2 3 5
//1 2 7
//2 5 8

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<bool> A(n + 1);
    A[0] = 0;
    int temp;
    for(int i = 1; i <= n; ++i) {
        cin >> temp;
        A[i] = temp;
    }
    
    vector<int> P(n + 1);
    P[0] = 0;
    
    int t, l = 1, r = n;
    
    auto transform = [&] () {
        for(int  i = 1; i <= n; ++i)
            P[i] = A[i] + P[i-1];
    };
    
    auto sumCount = [&] () {
        int sum = 0;
        if(l == 1)
            p[]
            for(int i = l; i <= r; ++i) {
                sum += P[i];
            }
        return sum;
    };
    
    transform();
    
    auto Atransform = [&] () {
        for(int i = l; i <= r; ++i) A[i] = !A[i];
    };
    //
    auto print = [&] (auto items) {
        for(int i = 0; i <= n; ++i) {
            cout << items[i] << ", ";
        }
        cout << endl;
    };
    
    //    cout <<" P initially " << endl;
    //    print(P);
    
    while(q--) {
        cin>> t >> l >> r;
        if(t == 1) {
            Atransform();
            cout <<"Atranstorm\n";
            print(A);
            print(P);
            transform();
            
            cout <<"Ptranstorm\n";
            print(A);
            print(P);
        }
        else cout << sumCount() << endl;
    }
    
    
}
