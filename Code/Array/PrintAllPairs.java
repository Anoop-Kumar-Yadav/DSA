
import java.util.Arrays;

public class PrintAllPairs {

    public static void BruteForce(int[] nums) {
        int n = nums.length;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                System.out.printf(" (%d, %d) ", nums[i], nums[j]);
            }
            System.out.println("");
        }
    }

    public static void main(String[] args) {
        int[] arr = {1, 2, 4, 5};
        System.out.println(Arrays.toString(arr));
        BruteForce(arr);
    }
}
