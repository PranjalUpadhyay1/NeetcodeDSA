class Solution {
    public int pivotIndex(int[] nums) {
      int i=-1;
      int a=0;
      int total=0;
      int l=0;
      int r=0;
      int ans=0;
      boolean flag=false;

      for(int k=0;k<nums.length;k++)
      {
        total +=nums[k];
      }
      while(i<nums.length && a<nums.length)
      { 
        r =total-l-nums[a];
        int sum_l=total-r-nums[a];
        int sum_r=total-l-nums[a];
        
        if(sum_l !=sum_r)
        {
          a++;
          i++;
          l +=nums[i];
        }
        else
        {
          ans= a;
          flag=true;
          break;
        }
      }

      if(flag==false)
      {
        return -1;
      }

      return a;
        
    }
}
