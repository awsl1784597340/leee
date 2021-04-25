class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int length=nums.size();
        int returnlength=length;
        int i = 0;
        while(i!=returnlength){
            if(nums[i]==val){
                nums[i]=nums[returnlength-1];
                returnlength--;
            }else{
                i++;
            }
        }
        return returnlength;
    }
};