#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string, std::vector<string> > mp;
        for ( int i =0; i < strs.size(); i++ ) {
            string t = strs[i];
            sort( t.begin(), t.end());
            mp[t].push_back(strs[i]);
        }
        std::vector< std::vector<string> > ret;
        for (auto key: mp ){
            ret.push_back( key.second );
        }
        return ret;
    }
};