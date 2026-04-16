
import java.util.Arrays;

public class FindSecondLargest {

    public static int BruteForce(int[] nums) {
        int n = nums.length;

        for (int i = 0; i < n; i++) {
            int count = 0;
            for (int j = 0 ; j < n; j++) {
                if (nums[j] > nums[i]) {
                    count++;
                }
            }
            if (count == 1) {
                return nums[i];
            }
        }
        return -1;
    }

    public static int TwoPassApproach(int[] nums) {
        int n = nums.length;

        int largest = Integer.MIN_VALUE;
        for (int i = 0; i < n; i++) {
            if (nums[i] > largest) {
                largest = nums[i];
            }
        }
        int s_largest = Integer.MIN_VALUE;
        for (int i = 0; i < n; i++) {
            if (nums[i] > s_largest && nums[i] != largest) {
                s_largest = nums[i];
            }
        }
        if (s_largest == Integer.MIN_VALUE) {
            return -1;
        }
        return s_largest;
    }

    public static int SortingApproach(int[] nums) {
        int n = nums.length;
        Arrays.sort(nums);

        int largest = nums[n - 1];

        for (int i = n - 1; i >= 0; i--) {
            if (nums[i] != largest) {
                return nums[i];
            }
        }
        return -1;
    }

    public static int SinglePass(int[] nums) {
        int n = nums.length;

        int largest = Integer.MIN_VALUE;
        int s_largest = Integer.MIN_VALUE;

        for (int i = 0; i < n; i++) {
            if (nums[i] > largest) {
                s_largest = largest;
                largest = nums[i];
            }
            if (largest > nums[i] && nums[i] > s_largest) {
                s_largest = nums[i];
            }
        }
        if (s_largest == Integer.MIN_VALUE) {
            return -1;
        }
        return s_largest;
    }

    public static void main(String[] args) {
        int[] arr = {2147483647, 0, -2147483648};
        int x = TwoPassApproach(arr);
        System.out.println("Output : " + x);
    }
}
