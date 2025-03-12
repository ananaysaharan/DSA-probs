//118. Pascal's Triangle


//APPROACH -01 using binomial coffecients
class Solution {
public:
    
    int binomialCoeff(int n,int k) {
        long long res=1;
        if(k>n-k)
            k=n-k;
        
        for(int i=0;i<k;++i) {
            res*=(n-i);
            res/=(i+1);
        }
        return res;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        
        for(int n=0;n<numRows;++n) {
            vector<int> row;
            for(int k=0;k<=n;++k) {
                row.push_back(binomialCoeff(n,k)); 
            }
            res.push_back(row);
        }
        
        return res;
    }
};

// TC O(N^2)
//SC O(N^2)



//APPROACH -02 just itrating and adding the elements in prev row

class Solution {
public:
    vector<vector<int>> generate(int numrows) {
        vector <vector<int>> res;
        vector <int> ter;
        ter.push_back(1);
        res.push_back(ter);
        int n=2;
        while(n<=numrows){
            vector <int> temp;
         for(int i=0;i<n;i++){
            if(i==0||i==n-1){
                temp.push_back(1);
            }
            else{
                temp.push_back(res[n-2][i-1]+res[n-2][i]);
            }
            
         }
            res.push_back(temp);
            n++;
        }
        return res;   
    }
};

// TC O(N^2)
//SC O(N^2)

//48.Rotate Image


class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        reverse(matrix.begin(),matrix.end());
        for(int i=0;i<matrix.size();i++){
            for(int j=i;j<matrix.size();j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    }
};

//TC O(N^2)
//SC O(1)


//54.Spiral Matrix

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int bottom = matrix.size() - 1;
        int right = matrix[0].size() - 1;
        int top = 0;
        int left = 0;
        
        vector<int> result;
        
        while (result.size() < matrix.size() * matrix[0].size()) {
            
            for (int i = left; i <= right; i++) {
                result.push_back(matrix[top][i]);
            }
            top++;
            
            for (int i = top; i <= bottom; i++) {
                result.push_back(matrix[i][right]);
            }
            right--;
            
            if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    result.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    result.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        
        return result;
    }
};

//TC O(M*N)
//SC O(M*N)

//POTD 2529. maximum no of pos or neg


class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int firstneg = search(nums, -1);
        int middleman = firstneg + 1;
        while (middleman < nums.size() && nums[middleman] == 0) {
            middleman++;
        }
        
        return max(firstneg + 1, static_cast<int>(nums.size() - middleman));
    }

    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1; 
        
        while (low <= high) {  
            int mid = low + (high - low) / 2;
            
            if (nums[mid] <= target) 
                low = mid + 1;  
            else 
                high = mid - 1; 
        }
        
        return high;  
    }
};

//TC O(logn)
//SC O(1)
