//Ques-01 704. Binary search

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;  

        while (low <= high) {  
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) 
                return mid;
            else if (nums[mid] < target) 
                low = mid + 1;  
            else 
                high = mid - 1; 
        }

        return -1;  
    }
};

//ques -02 34.first and last 

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res;
        res.push_back(-1);
        res.push_back(-1); 
        if(nums.size()==0) return res;
        int low= int(lower_bound(nums.begin(),nums.end(),target)-nums.begin());
        
        if(low>=nums.size() || nums[low]!=target ){
            return res;
        }
        else{
            int high=int(upper_bound(lower_bound(nums.begin(),nums.end(),target),nums.end(),target)-nums.begin());
            res[0]=(low);
            res[1]=(high-1);    
        }
        return res;
    }
};

//ques-03 search insert position 
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0, high = nums.size(); 
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target)
                return mid;
            if (nums[mid] > target)
                high = mid;
            else
                low = mid + 1;  
        }
        return low; 
    }
};
