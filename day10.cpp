// LEETCODE 2149
//TC O(N)
//SC O(N)


#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        queue<int> posQueue, negQueue;
        int n = nums.size();

        
        for (int num : nums) {
            if (num > 0) posQueue.push(num);
            else negQueue.push(num);
        }

        
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) { 
                nums[i] = posQueue.front();
                posQueue.pop();
            } else { 
                nums[i] = negQueue.front();
                negQueue.pop();
            }
        }

        return nums;
    }
};

  // leetcode 121
  //approach 1 -> TC O(N2)
                //SC O(1)
  class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int ans=0;
        for(int i=0; i<n; i++) {
            for(int j=i; j<n; j++) {
                ans= max(ans,prices[j]-prices[i]);
            }
        }
        return ans;
    }
};


//approach 2 -> 
  //TC O(n)
  //SC O(1)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size(),bestBuy=prices[0],maxProfit=0;
        for(int i=1;i<n;i++) {
            if(prices[i]>bestBuy){
                maxProfit=max(maxProfit,prices[i]-bestBuy);
            }
            bestBuy=min(bestBuy,prices[i]);
        }
        
        return maxProfit;
    }
};




//LEETCODE 31 
//TC O(N)
//SC O(1)
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(), i= n-2;
        
        
        while (i>= 0 && nums[i]>= nums[i+1]) {
            i--;
        }
        
        if (i >= 0) {
            
            int j = n-1;
            while (nums[j]<= nums[i]) {
                j--;
            }
            swap(nums[i], nums[j]);
        }
        reverse(nums.begin()+ i+1, nums.end());
    }
};
