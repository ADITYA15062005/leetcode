class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int l=0;
        int r=n-1;
        int ans=0;
        while(l<r){
            int w=r-l;
            int h=min(height[l],height[r]);
            int ar=h*w;
            ans=max(ar,ans);
            if(height[l]<height[r]){
                l++;
            }
            else{
                r--;
            }

        }
        return ans;
    }
};