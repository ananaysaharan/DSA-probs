//Que-1 Floor and ceil

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	int low=0,high=n-1,mid;
	int floorans=-1;
	while(low<=high){
		mid= low +((high-low)/2);
		if(a[mid]==x){
			floorans=a[mid];
			break;
		}
		else if(a[mid]<x){
			floorans=a[mid];
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	

	low=0,high=n-1;
	int cans=-1;
	while(low<=high){
		mid= low +((high-low)/2);
		if(a[mid]==x){
			cans=a[mid];
			break;
		}
		else if(a[mid]<x){
			low=mid+1;
		}
		else{
			cans=a[mid];
			high=mid-1;
		}
	}
	
	return {floorans,cans};
}


//Ques-02 153.Find minimum in rotated sorted array

class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0,high=nums.size()-1;
        int mini=INT_MAX,mid;
        while(low<=high){
            mid=low +((high-low)/2);
            
            if(nums[low]<=nums[mid]){
                mini=min(mini,nums[low]);
                low=mid+1;
            }
            else{
                mini=min(mini,nums[mid]);
                high=mid-1;
            }
        }
        return mini;
    }
};


//ques -03 33.Find target in Rotated sorted array

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1;
        int ans=-1,mid;
        while(low<=high){
            mid=low +((high-low)/2);
            if(nums[mid]==target){
               ans=mid;
               return ans;
            }
            if(nums[low]<=nums[mid] ){
               if(nums[mid]>target && nums[low]<=target){
                    high=mid-1;
               }
               else{
                low=mid+1;
               }
                
            }
            else{
                 if(nums[mid]<target && nums[high]>=target){
                    low=mid+1;
               }
               else{
                high=mid-1;
               }
            }
        }
        return ans;
    
    }
};
