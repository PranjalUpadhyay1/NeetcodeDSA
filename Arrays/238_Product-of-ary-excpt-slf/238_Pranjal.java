class Solution {
    public int[] productExceptSelf(int[] nums) {
        Set<Integer> s = new HashSet<>();
        int p=1; 
        for(int i=0;i<nums.length;i++){
            if(nums[i]==0){
            s.add(i);
            continue;
            }
            else p*=nums[i];
        }
        
        for(int i = 0;i<nums.length;i++){
            if(s.size()>0){
                if(s.size()>1) nums[i] = 0;
                else if(nums[i]==0) nums[i] = p;
                else nums[i]=0;
            }
            else nums[i] = p/nums[i];
        }
        return nums;
    }
}