#include <unordered_set>
#include <vector>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::unordered_set<int> s;
        for (int i : nums ) {
            if ( s.count(i ) ) return true;
            else s.insert(i);
        }
        return false;
    }
};