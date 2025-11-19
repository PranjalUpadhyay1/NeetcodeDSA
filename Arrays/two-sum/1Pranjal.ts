function twoSum(nums: number[], target: number): number[] {
    const m:{[key: number]: number} ={};
    for (let i:number = 0; i < nums.length; i++) {
        const num:number = nums[i];
        if (target - num in m) {
            return [i, m[target - num]];
        }
        m[num] = i;
    }    
};