class Solution {
public:
    double myPow(double x, int n) {
        // if(n==0){
        //     return 1.0;
        // }
        // if(x==0){
        //     return 0.0;
        // }
        // if(x==1){
        //     return 1.0;
        // }
        // if(x==-1 && n%2==0){
        //     return 1.0;
        // }
        // if(x==-1 && n%2!=0){
        //     return -1.0;
        // }
        long biform=n;
        if(n<0){
            x=1/x;
            biform= -biform;
        }
        double ans=1;
        while(biform>0){
            if(biform%2==1){
                ans*=x;
            }
            x*=x;
            biform /=2;
        }
        return ans;
    }
};