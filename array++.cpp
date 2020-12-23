//
//  main.cpp
//  array++
//
//  Created by Vicky_Jha on 18/03/20.
//  Copyright © 2020 test. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <vector>
#include <set>
typedef long long ll;
using namespace std;
int main(int argc, const char * argv[]) {

    //auto is used to to automatially consider the type according to the situation
    string s;
    getline(cin, s);//takes full string with spaces also

    
    ll a = 123456789;
    ll b1 = 987654321;
    cout << a*b1 << "\n";
    
    double x = 0.3*3+0.1 , b = 1;
    printf("%.20f\n", x); // 0.99999999999999988898
    //here x and b should be equal but due to precision error x is less than b
    //so here is the solution to compare the above
    cout<<x<<"\n";
    if(abs(x-b) < pow(10 , -9)){
        cout<<x<<" and "<<b<<" are equal\n";
    }
    
    int array[] = {10 , 4 ,5, 2, 1, 7,90 , 30 , 4};
    int size = sizeof(array)/sizeof(array[0]);
    random_shuffle(array, array+size);//shuffle in any order
    sort(array, array+size);//will sort in accending
    
    for(int i : array){
        cout<<i<<"\n";
    }
    reverse(array , array+size);//will reverse order
    string s2 = "monkey";
    sort(s2.begin(), s2.end()); // sort in alphabetical
    for(auto x : s2){
        cout<<x<<"\n";
    }
    
    vector<pair<int,int>> v;
    v.push_back({1,5}); v.push_back({2,3}); v.push_back({1,2});
    sort(v.begin(), v.end());
//    reverse(v.begin(), v.end());
//    random_shuffle(v.begin(), v.end());
    
    vector<tuple<int,int,int>> v2;
    v2.push_back({2,1,4});
    v2.push_back({1,5,3});
    v2.push_back({2,1,3});
    sort(v2.begin(), v2.end());
    
    vector<int> v1 = {100 , 90 , 80 , 70 , 60 , 50};
    
    v1.push_back(40);
    sort(v1.begin() , v1.end());//Sort in accending order
    for(auto x : v1){
        cout<<x<<"\n";
    }
    sort(v1.rbegin(),v1.rend());//sort in decending order
    for(auto x : v1){
        cout<<x<<"\n";
    }

    cout << "Last element is = "<<v1.back() << "\n"; // shows last element
    v.pop_back();//removes last element
    cout << v1.back() << "\n"; //
    for(auto x : v1){
        cout<<x<<" ";
    }//popback didn't removed last element , search google

    
    // size 10, initial value 0
    vector<int> v3(10);
    // size 10, initial value 5
    vector<int> v4(10, 5);
    auto it = v1.end();
    it--;
    cout<<"\n\n"<<*it<<"\n\n";
    it++;
    for(it=v1.begin() ; it != v1.end() ; it++){
        cout<<*it<<"\n";
    }
    

//    it = v1.find(50);//this compiler does not support find function
//    if (it == v1.end()) {
//        cout<<"not found\n";
//    }
//        x is not found
//    }easiest way to check if the number is present in the array or not
//
//
    
    
    
    
    
    
    return 0;
}
