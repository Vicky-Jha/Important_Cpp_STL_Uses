#include <iostream>
#include <map>
#include <iterator>
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> copy = nums;
        sort(nums.begin() , nums.end());
        multimap<int , int > umulmap;
        typedef multimap<int, int>::iterator UMMAPIterator;
        
        for(int i=0 ; i<nums.size() ; i++)
        {
            auto it = umulmap.find(nums[i]);
            if (it != umulmap.end())
            {
                pair<UMMAPIterator, UMMAPIterator> result = umulmap.equal_range(nums[i]);
                UMMAPIterator k= result.second;
                k--;
                umulmap.insert(make_pair(nums[i],k->second));
            }
            else
            {
                umulmap.insert(make_pair(nums[i],i));
            }
            
        }
        
        for(int i=0 ; i<copy.size() ; i++)
        {
            auto k = umulmap.find(copy[i]);
            nums[i] = k->second;
            auto p = k;
            k++;
            umulmap.erase(p, k);
        }
        copy.clear();
        umulmap.clear();
        
        
        return nums;
        
    }
};
int main()
{
    Solution s;
    vector<int> v = {8,1,2,2,3};
    v = s.smallerNumbersThanCurrent(v);
    for(int i : v)
        cout<<i<<" ";
    cout<<"\n";
    return 0;
}
