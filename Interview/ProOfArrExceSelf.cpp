#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prefix = 1;
        vector<int> ret(nums);
        for ( int i = 0 ; i < nums.size() ; i++ ) {
            ret[i] = prefix;
            prefix *= nums[i]; 
        }
        
        int postfix = 1;
        for ( int i = nums.size()- 1 ; i >= 0;i-- ) {
            ret[i] *= postfix;
            postfix *= nums[i];
        }

        return ret;
    }
};