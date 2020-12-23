#include <iostream>

using namespace std;

void Search(int nsize , int arr[] , int search){
    auto k = lower_bound(arr,arr+nsize,search)-arr;
//    auto diff = &arr[9] - &arr[0];
//    cout<<diff<<" = diff\n";
//    printf("%p = base address\n",&arr[0]);
//    cout<<&arr[9]<<" = address of array 9\n";
//    cout<<lower_bound(arr,arr+nsize,search)<<" = lowerbound\n"<<arr<<" = arr\n"<<k<<" = k\n";
    if (k < nsize && arr[k] == search)
        cout<<search<<" Found at location "<<k+1<<"\n";
    else
        cout<<"Element not found"<<"\n";
}
void noOfRepeat(int nsize , int arr[] , int search){
    
    auto a = lower_bound(arr, arr+nsize, search);
    auto b = upper_bound(arr, arr+nsize, search);
//    cout<<b<<" upperbound\n";
    cout << b-a <<" = no of "<<search<<" repeated"<< "\n";
}
void equalRange(int n , int array[] , int x){
    auto r = equal_range(array, array+n, x);
    cout << r.second-r.first << "\n";
}
int main(){
    int search ,first , nsize;
    int arr[] = {10,20,30,40,50,60,70,90,90,100};
    first = 0;
    nsize = sizeof(arr)/sizeof(arr[0]);
    printf("Enter the element to be searched\n");
    scanf("%d",&search);
    Search(nsize , arr , search);
    noOfRepeat(nsize , arr , search);
    equalRange(nsize, arr, search);
    return 0;
}
