//Ques-01
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int wpointer = 0;
        for (int rpointer = 0; rpointer < nums.size(); rpointer++) {
            if (nums[rpointer] != 0) {
                swap(nums[rpointer], nums[wpointer]);
                wpointer++;
            }
        }
    }
};
//TC:O(N), SC:O(1)

//Ques-02

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        k = k % size;  
        
        reverse(nums.begin(), nums.end());  
        reverse(nums.begin(), nums.begin() + k);  
        reverse(nums.begin() + k, nums.end());  
    }
};
//TC:O(N), SC:O(1)
