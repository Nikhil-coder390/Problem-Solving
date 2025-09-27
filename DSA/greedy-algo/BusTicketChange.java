
class Solution {
    public boolean canServe(int[] arr) {
        // code here
        int five = 0, ten = 0;
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == 5) {
                five++;
            } else if (arr[i] == 10) {
                if (five > 0) {
                    five--;
                    ten++;
                } else
                    return false;
            } else {
                if (five > 0 && ten > 0) {
                    five--;
                    ten--;
                } else if (five >= 3) {
                    five -= 3;
                } else
                    return false;
            }
        }
        return true;
    }
}

public class BusTicketChange {
    public static void main(String[] args) {
        Solution obj = new Solution();
        int[] arr = { 5, 5, 5, 10, 20 };
        System.out.println(obj.canServe(arr)); // Output: true
    }
}
