class Solution {
public:
    vector<vector<int>> ans;
    void binary(int n,vector<int> &A)
    {
        if(n < 1)
        {
            ans.push_back(A);
        }else
        {
            A[n-1] = 0;
            binary(n-1,A);
            A[n-1] = 1;
            binary(n-1,A);
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> A(nums.size());
        binary(nums.size() , A);
        A.clear();
        
        for(int i=0 ; i<ans.size() ; i++)
        {
            for(int j=0 ; j<nums.size() ; j++)
            {
                if(ans[i][j] == 1)
                    A.push_back(nums[j]);
            }
            ans[i] = A;
            A.clear();
        }
        return ans;
    }
};
