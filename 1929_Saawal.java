class Solution {
    public int[] getConcatenation(int[] nums) {
        
        int length_of_nums = nums.length;
        int new_array_size = nums.length*2;
        int[] ans = new int[new_array_size];
        for(int i=0;i<nums.length;i++)
        {
              ans[i]= nums[i];
            
        }

        for(int i=nums.length; i<ans.length;i++)
        {
          ans[i] = nums[i-length_of_nums];
        }

        return ans;
    }
}
