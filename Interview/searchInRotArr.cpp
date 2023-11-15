#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    int binSearch(int s, int e, vector<int>& nums, int target ) {
        while ( s <= e ) {
            int mid = s + ( e-s)/2;
            if ( nums[mid] == target ) return mid;
            else if ( nums[mid] < target ) {
                s = mid+1;
            } else {
                e = mid-1;
            }
        }

        return -1;
    }

    int search(vector<int>& nums, int target) {
        if (nums.size() < 2 && nums[0] == target ) return 0;
        if  (nums.size() < 2 && nums[0] != target ) return -1;

        int end = nums.size()-1;
        int start = 0;

        while ( start < end ) {
            int mid = start + ( end - start)/2;
            if ( nums[end] < nums[mid]) {
                start = mid+1;
            } else {
                end= mid;
            }
        }

        cout << nums[start]; 
        int res = binSearch(0, start, nums, target); 
        if ( res != -1 ) return res;
        else return  binSearch( start, nums.size()-1 , nums, target); 

    }
};