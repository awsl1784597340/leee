class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        int x = nums.size();
        int *a=new int[x];
        for(int i=0;i<nums.size();i++){
            a[nums[i]] = 0;
        }
        for(int i=0;i<nums.size();i++){
            if(a[nums[i]]==1)return nums[i];
            a[nums[i]] = 1;
        }
        return 0;
    }
};