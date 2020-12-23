//
//  main.cpp
//  Playing_with_vector
//
//  Created by Vicky_Jha on 02/07/20.
//  Copyright © 2020 test. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    vector<vector<int>> v(5 , vector<int>(5,0));
    for(int j = 0 ; j<5 ; j++)
    for(int i : v[j])
        cout<<i<<" ";
    return 0;
}
