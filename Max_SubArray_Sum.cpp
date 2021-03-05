//
//  main.cpp
//  Max_SubArray_Sum
//
//  Created by Vicky_Jha on 17/03/20.
//  Copyright © 2020 test. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector< int >& nums) {
         int res = INT_MIN, curSum = 0 ;
         for ( int num: nums) {
            curSum = max(curSum + num, num);
            res = max(res, curSum);
        }
        return res;
}

int main(int argc, const char * argv[]) {
    
//    int a[] = {-163,-20};
//    int i , j , best=0 , sum =0;
////
////    for(i = 0 ; i<8 ; i++){
////        sum = 0;
////        for(j = i ; j<8 ; j++){
////            sum += a[j];
////            best = max(best , sum);
////        }
////    }O(n^2) complexity
//    int size = sizeof(a)/sizeof(a[0]);
//    for(i=0 ; i<size ; i++){
//        sum = max(a[i] , sum + a[i]);
//        best = max(best , sum);
//    }//O(n) complexity
//
//    cout<<best<<"\n";
    
//    best
    
    vector<int> v = {};
    
    cout<<maxSubArray(v)<<endl;
    
    return 0;
}
