class Solution {
    public boolean lemonadeChange(int[] bills) {
        int five = 0, ten = 0;
        for (int bill : bills) {
            if (bill == 5) {
                five++;
            } else if (bill == 10) {
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

public class LemonadeChange {
    public static void main(String[] args) {
        Solution obj = new Solution();
        int[] bills = { 5, 5, 5, 10, 20 };
        System.out.println(obj.lemonadeChange(bills)); // Output: true
    }
}
