class Solution {
    //using recursion
    public int searchValue(int[] nums,int n,int target){
       if(n==0)
       return -1;
       if(nums[n-1] == target)
       return n-1;
       int ans = searchValue(nums,n-1,target);
       return ans;
    }
    public int search(int[] nums, int target) {
        int ans = searchValue(nums,nums.length,target);
        return ans;
    }
}
