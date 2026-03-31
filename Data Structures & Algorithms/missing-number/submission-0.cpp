class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xorr = 0;
        for(int i = 0; i < nums.size(); i++){
            xorr = xorr ^ (i+1);
        }
        for(int num : nums){
            xorr = xorr ^ num;
        }
        return xorr;
    }
};
