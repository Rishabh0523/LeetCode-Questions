class Solution {
public:
    int mySqrt(int x) {
        int s=0;
        int e=x;
        int mid = s + (e-s)/2;
        int ans= -1;

        while(s<=e){
            // kya mid hi toh answer nhii h toh ye krenege
            if(mid*mid==x){
                return mid;
            }
            else if(mid*mid < x){
                // ans store
                // right mai jao
                ans=mid;
                s=mid+1;
            }

            else{
                // left mai jana hai
                e = mid-1;
            }
            mid = s+(e-s)/2;

        }

        return ans;
        
    }
};