#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::vector<int> ret = { 0, (int)nums.size()-1 };
        while ( ret[0] < ret[1] ) {
            if ( nums[ ret[0] ] + nums[ ret[1] ] == target ) {
                ret[0]++;
                ret[1]++;
                return ret;
            } 
            else if ( nums[ ret[0] ] + nums[ ret[1] ] < target ) ret[0]++;
            else ret[1]--;
        }
        return {-1, -1};
    }
};