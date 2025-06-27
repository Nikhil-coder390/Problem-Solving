class Solution {
    public int maxSubArray(int[] nums) {
        long maxi = Long.MIN_VALUE;
        long sum = 0;
        int start = 0, ansStart = -1, ansEnd = -1;
        for(int i=0;i<nums.length;i++){
            if(sum == 0){
                start = i;
            }
            sum+=nums[i];
            if(sum>maxi){
                maxi = sum;
                ansStart = start;
                ansEnd = i;
            }
            if(sum<0){
                sum=0;
            }
        }
        return (int)maxi;
    }
}

class KadaneAlgorithm{
    void main(String args[]){
        int[] arr = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };

        // Create an instance of Solution class
        Solution sol = new Solution();

        int maxSum = sol.maxSubArray(arr);

        // Print the max subarray sum
        System.out.println("The maximum subarray sum is: " + maxSum);
    }
}