#include <iostream>
using namespace std;
void Search(int last , int arr[] , int search)
{
    int k = 0;
    for (int b = last/2; b >= 1; b /= 2) {
        while (k+b < last && arr[k+b] <= search) k += b;
    }
    if (arr[k] == search) {
        cout<<search<<" Found at index "<<k+1<<"\n";
    }else{
        cout<<search<<" Not found\n";
    }
}
int main() {
    int search ,first , last;
    int arr[] = {100,90,80,70,60,50,40,30,20,10};
    first = 0;
    last = sizeof(arr)/sizeof(arr[0]);
    sort(arr , arr + last);
    //    printf("%d",last);
    printf("Enter the element to be searched\n");
    scanf("%d",&search);
    Search(last , arr , search);
    return 0;
}

