
import java.util.Arrays;
import java.util.HashSet;

public class ContainDuplicate {

    public static boolean BruteForce(int[] nums) {
        int n = nums.length;

        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] == nums[j]) {
                    return true;
                }
            }
        }
        return false;
    }

    public static boolean SortingTwoPointer(int[] nums) {
        int n = nums.length;

        Arrays.sort(nums);

        int i = 0;

        while (i < n-1) {
            if (nums[i] == nums[i+1]) {
                return true;
            }
            i++;
        }
        return false;
    }

    public static boolean HashSetApproach(int[] nums) {
        int n = nums.length;

        HashSet<Integer> set = new HashSet<>();

        for (int i = 0; i < n; i++) {
            if (set.contains(nums[i])) {
                return true;
            }
            set.add(nums[i]);
        }
        return false;
    }

    public static void main(String[] args) {
        int[] arr = {1,2,3,4};
        boolean sol = BruteForce(arr);
        System.out.println("Result : " + sol);
    }
}
