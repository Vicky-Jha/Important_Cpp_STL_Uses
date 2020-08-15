// shoelace formula// cross product
#include <bits/stdc++.h>
using namespace std;

double polygonArea(double X[], double Y[], int n)
{
    double area = 0.0;
    
    int j = n - 1;
    for (int i = 0; i < n; i++)
    {
        area += (X[j] + X[i]) * (Y[j] - Y[i]);
        j = i; // j is previous vertex to i
    }
    
    return abs(area / 2.0);
}

int main()
{
    double X[] = {0, 2, 4};
    double Y[] = {1, 3, 7};
    //vertices are given in either clockwise or anticlockwise order
//    0 1
//    2 3
//    4 7
//    0 1
//    area = 1/2 ( 0x3 - 2x1 + 2x7 - 4x3 + 4x1 - 0x7)
    int n = sizeof(X)/sizeof(X[0]);
    
    cout << polygonArea(X, Y, n);
}
