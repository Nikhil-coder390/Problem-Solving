import java.util.ArrayList;
import java.util.List;

class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {
        List<Integer> temp = new ArrayList<>();
        int n = matrix.length, m = matrix[0].length;
        int top=0,left = 0,right = m-1,bottom=n-1;
        while(top<=bottom && left<=right){
            for(int i=left;i<=right;i++){
                temp.add(matrix[top][i]);
            }
            top++;
            for(int i=top;i<=bottom;i++){
                temp.add(matrix[i][right]);
            }
            right--;
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    temp.add(matrix[bottom][i]);
                }
                bottom--;
            }
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    temp.add(matrix[i][left]);
                }
                left++;
            }
        }
        return temp;
    }
}

public class spiralMatrix {
    public static void main(String[] args) {
        Solution solution = new Solution();
        int[][] matrix = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        };
        List<Integer> result = solution.spiralOrder(matrix);
        for (int num : result) {
            System.out.print(num + " ");
        }
    }
}
