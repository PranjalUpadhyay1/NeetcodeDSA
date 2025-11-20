class Solution {
    public int majorityElement(int[] nums) {
        Map<Integer, Integer> m= new HashMap<>();
        for(int x:nums){
            m.put(x,1+m.getOrDefault(x,0));
            if(m.get(x)>nums.length/2) return x;
        }
        return -1;
    }
}