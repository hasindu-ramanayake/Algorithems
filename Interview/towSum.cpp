#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::vector<int> res = {-1, -1};
        std::unordered_map<int, int> map;
        map[nums[0]] = 0;
        for ( int i =1; i < nums.size() ; i++) {
            auto it = map.find( target - nums[i] );
            if ( it != map.end() ) {
                res[0] = it->second;
                res[1] =  i;
            } 
            map[nums[i]] = i;
        }
        
        return res;
    }
};