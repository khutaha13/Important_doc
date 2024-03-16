class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    
       int index =0, i = 0;
        while(i <nums.size())
        {
            int value = nums[index];
            if(value == nums[i])
            {
                ++i;
            }
            else{
                nums[++index] = nums[i];
            }     
        }
	    return index+1;
    }
};