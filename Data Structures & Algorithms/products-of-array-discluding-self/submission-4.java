class Solution {
    public int[] productExceptSelf(int[] nums) {
        int[] dupe = new int[nums.length];
        int curr = nums[0];
        dupe[0] = 1;
        for (int i = 1; i < nums.length; i++) {
            dupe[i] = curr;
            curr = curr*nums[i];

        }
        curr = nums[nums.length - 1];
        for (int i = nums.length - 2; i >= 0; i--) {
            dupe[i] *= curr;
            curr = curr*nums[i];

        }
        return dupe;
    }
}  
