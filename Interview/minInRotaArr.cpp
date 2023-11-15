#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    int findMin(vector<int>& nums) {
        if ( nums.size() < 2 ) return nums[0];
        int n = nums.size();
        if ( nums[0] < nums[n-1] ) return nums[0];

        int start = 0;
        int end = n-1;
        while ( start < end ){
            int mid = start + ( end - start)/2;
            if ( nums[end] < nums[mid] ) {
                start = mid+1;
            } else {
                end = mid;
            }
        }

        return nums[start];
    }
};