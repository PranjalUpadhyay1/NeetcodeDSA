class Solution {
    public List<Integer> majorityElement(int[] nums) {
        List<Integer> res = new ArrayList<>();
        int a = -1, b= -1;
        int count1 = 0, count2 = 0;

        for(int num:nums){
            if(a!=-1 && a ==num) count1++;
            else if(b!=-1 && b == num) count2++;
            else if(count1==0){
                a = num;
                count1 = 1;
            }   else if(count2==0){
                b=num;
                count2=1;
            }   else {
                count1--;
                count2--;
            }
        }

        count1=0;
        count2=0;

        for(int num:nums){
            if(num == a) count1++;
            if(num == b) count2++;
        }
        if(count1>nums.length/3)  res.add(a);
        if(b!=a && count2>nums.length/3) res.add(b);
        return res;
    }
}