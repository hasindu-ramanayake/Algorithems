#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> mp;
        std::vector<int> ret;
        for ( int i=0; i < nums.size(); i++ ) {
            mp[nums[i]]++;
        }
        priority_queue<pair<int, int> > p1;
        for ( auto it = mp.begin(); it != mp.end(); it++ ) {
            p1.push( {it->second, it->first} );
        }
        for ( int i = 0 ;i < k ; i++ ) {
            ret.push_back(p1.top().second);
            p1.pop();
        }
        return ret;
    }
};