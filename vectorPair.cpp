//
//  main.cpp
//  vectorPair
//
//  Created by Vicky_Jha on 21/07/20.
//  Copyright © 2020 test. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
int main(int argc, const char * argv[]) {
    vector<pair<char , double>> var(3);
    var[0] = make_pair('a', 2.0);
    var[1] = make_pair('b', 4.0);
    var[2] = make_pair('c', 6.0);
    for(int i=0 ; i<var.size() ; i++)
        cout<<var[i].first<<" "<<var[i].second<<"\n";
    return 0;
}
