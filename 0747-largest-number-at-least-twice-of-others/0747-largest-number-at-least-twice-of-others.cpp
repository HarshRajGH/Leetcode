class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int larg= 0;
        int ele_ind=0;

        for (int i =0; i<nums.size();i++){
            if(nums[i]>larg){
                larg= nums[i];
                ele_ind= i;
            }
        }
        for (int i=0; i<nums.size();i++){
            if( i!= ele_ind && larg < 2* nums[i]){
                return -1;
            }
        }
        return ele_ind;
    }
};