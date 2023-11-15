#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& nums) {
        int i = 0, k = nums.size() -1;
        int maxArea = INT_MIN;
        while ( i < k ) {
            int area = min(nums[i], nums[k] ) * ( k - i);
            maxArea = max( area, maxArea );
            if ( nums[i] < nums[k] ) i++;
            else k--;
        }
        return maxArea;
    }
};