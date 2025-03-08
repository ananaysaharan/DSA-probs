//ques-1
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        int size = flowerbed.size();

        for (int i = 0; i < size; i++) {
            if (flowerbed[i] == 0) {
                bool leftEmpty = (i == 0) || (flowerbed[i - 1] == 0);
                bool rightEmpty = (i == size - 1) || (flowerbed[i + 1] == 0);

                if (leftEmpty && rightEmpty) {
                    count++;
                    i++;  
                }
            }
        }

        return count >= n;
    }
};

//ques 02
class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int sum=0;
        int minsum=INT_MAX;
        int n=nums.size();
        for (int i=l;i<=r;i++) {
            sum=0;
            int j=0;
            int k=i;
            for (int a=0;a<k;a++) {
                sum+=nums[a];
            }
           minsum=min(sum,minsum);
            while(k<n) {
                sum+=nums[k++]-nums[j++];
                minsum=min(sum,minsum);
            }
            
        }
        if(minsum==INT_MAX) return -1;
        return minsum;
    }
};

//POTD

class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int i=0,j=k-1;
        int minwhite=INT_MAX;
        int white;
        for(i=0;j<blocks.size();i++){
            minwhite=min(minwhite,wcount(blocks,i,j));
            j++;
        }
        return minwhite;
    }
    int wcount(string s,int i,int j){
        int count=0;
        for(int n=i;n<=j;n++){
            if(s[n]=='W')
            count++;
        }
        return count;
    }
};
