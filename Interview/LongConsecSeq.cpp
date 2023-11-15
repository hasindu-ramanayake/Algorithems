#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() < 1) return 0;
        int maxLen = 1;
        std::unordered_set<int> s;
        for(int i : nums ) s.insert(i);
        for ( auto &i : s ) {
            if ( !s.count(i-1) ) {
                int len = 1;
                while ( s.count( i+len ) ) len++;
                maxLen = max(maxLen, len);
            }
        }

        return maxLen;
    }
};