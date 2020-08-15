#include <iostream>

using namespace std;
bool search(int array[] , int nSearch){
    int mid , first_index = 0 , last_index = 10 , flag=0;
    while (first_index <= last_index) {
        mid = (first_index+last_index)/2;
        if(nSearch < array[mid])
            last_index = mid - 1;
        else if (nSearch > array[mid])
            first_index = mid + 1;
        else if(nSearch == array[mid]){
            cout<<nSearch<<" found at location "<<mid+1<<"\n";
            flag=1;
            exit(1);
        }
    }
    return flag;
}
int main(){
    int nSearch;
    int array[] = {10 , 20 ,30 ,40 , 50 , 60 ,70 ,80,90,100};
    cout<<"Enter element to search in the array\n";
    cin>>nSearch;
    if(!search(array , nSearch))
        cout<<"Not found"<<"\n";
    
    return 0;
}
