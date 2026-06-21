class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long max =-2200000000LL, sec_max =-2200000000LL, trd_max =-2200000000LL;
        int count=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == max || nums[i] == sec_max || nums[i] == trd_max){
                continue;
            }
            if(nums[i] > max){
                trd_max = sec_max;
                sec_max = max;
                max = nums[i];
                count ++;
            }
            else if(nums[i] > sec_max){
                trd_max = sec_max;
                sec_max = nums[i];
                count++;
            }
            else if(nums[i] > trd_max){
                trd_max = nums[i];
                count++;
            }
        }
        if(count >= 3){
            return (int)trd_max;
        }
        else{
            return (int)max;
        }
    }
};
