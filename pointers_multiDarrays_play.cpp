# include <iostream>
using namespace std;

int main()
{
//    B[i][j] = *(B[i] + j); // *(*(B+i) + j);
    int arr[3]={1,2,3};
    int mulArr[2][2]={
        {1,2},{3,4}
    };
    int (*p)[2] = mulArr;
    cout<<&mulArr[1][1]<<endl;
    cout<<mulArr[0]<<endl;
    cout<<p<<endl;
    cout<<p+1<<endl;
    return 0;
}
