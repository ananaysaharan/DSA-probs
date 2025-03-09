//Ques-01
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        if(image.size()%2==0){
            int n=image.size()-1;
            for(int k=0;k<=n;k++){
            for(int i=0;i<(n+1)/2;i++){
                invert(image[k],i);
                invert(image[k],n-i);
                swap(image[k][i],image[k][n-i]);
            }
            }
        }

        else{
            int n=image.size()-1;
            for(int k=0;k<=n;k++){
            int i=0;
            for(i=0;i<(n)/2;i++){
                invert(image[k],i);
                invert(image[k],n-i);
                swap(image[k][i],image[k][n-i]);
            }
            invert(image[k],i);
            swap(image[k][i],image[k][n-i]);
            }

        }
        return image;
    }
    void invert(vector<int>& point,int i){
        if(point[i]==1){
            point[i]=0;
        }
        else{
            point[i]=1;
        }
    }
};
