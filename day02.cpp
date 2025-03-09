class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> res;
        vector<int> inter(2, 0);
        int i=0,j=0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i][0]==nums2[j][0]){
            inter[0]=nums1[i][0];
            inter[1]=nums1[i][1]+nums2[j][1];
            res.push_back(inter);
            i++;
            j++;
            }
            else{
                if(nums1[i][0]>nums2[j][0]){
                    res.push_back(nums2[j]);
                    j++;
                }
                else{
                    res.push_back(nums1[i]);
                    i++;
                }
            }
        }

        while(i<nums1.size()){
            res.push_back(nums1[i]);
            i++;
        }
        while(j<nums2.size()){
            res.push_back(nums2[j]);
            j++;
        }
        return res;
    }
};
