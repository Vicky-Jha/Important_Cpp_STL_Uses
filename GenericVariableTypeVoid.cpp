#include <bits/stdc++.h>
using namespace std;
int main()
{
    void *p;
    int b = 10;
    p = &b;
    cout<<*((int*)p);
    return 0;
}
