
import java.util.Arrays;

public class FindLargest {

    public static int BruteForce(int[] nums) {
        int n = nums.length;

        int largest = nums[0];

        for (int i = 0; i < n; i++) {
            if (nums[i] > largest) {
                largest = nums[i];
            }
        }
        return largest;
    }

    public static int SortingApproach(int[] nums) {
        int n = nums.length;

        Arrays.sort(nums);
        return nums[n - 1];
    }

    public static void main(String[] args) {

    }
}
