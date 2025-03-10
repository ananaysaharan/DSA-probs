//Ques-01 Two sum
class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            int n=nums.size();
            unordered_map<int, int> map;
    
            for (int i = 0; i < n; i++) {
                if (map.find(target - nums[i]) != map.end()) {
                    return {i, map[target - nums[i]]};
                }
                map[nums[i]] = i;
            }
            return {};
        }
};
//TC : O(n)
//SC : O(n)

//Ques 02 Sort Colours
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i = 0, j = nums.size() - 1, n = 0;
        
        while (n <= j) {
            if (nums[n] == 0) {
                swap(nums[n], nums[i]);
                i++;
                n++; 
            } 
            else if (nums[n] == 2) {
                swap(nums[n], nums[j]);
                j--; 
            } 
            else {
                n++; 
            }
        }
    }
};

//TC : O(n)
//SC : O(1)


//Ques 03 Maximum score
class Solution {
  public:
    
    int pairWithMaxSum(vector<int> &arr) {
        int maxsum=INT_MIN;
        for(int i=0;i<arr.size()-1;i++){
            maxsum=max(maxsum,(arr[i]+arr[i+1]));
        }
        return maxsum;
    }
};
//TC : O(n)
//SC : O(1)
