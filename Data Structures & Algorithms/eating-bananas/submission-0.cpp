class Solution {
public:
    int findMax(vector<int>& v){
        int maxi = INT_MIN;
        for(int i = 0; i  < v.size(); i++){
            maxi = max(maxi,v[i]);
        }
        return maxi;
    }
    int findTotal(vector<int>& v, int hourly){
        int totalH = 0;
        for(int  i =0; i < v.size(); i++){
            totalH += (v[i] + hourly - 1) / hourly;
        }
        return totalH;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = findMax(piles);

        while(low <= high){
            int mid = low + (high - low) / 2;
            int totalH = findTotal(piles,mid);

            if(totalH <= h){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return low;
    }
};
