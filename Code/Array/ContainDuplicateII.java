
import java.util.HashMap;
import java.util.HashSet;

public class ContainDuplicateII {

    public static boolean BruteForce(int[] nums, int k) {
        int n = nums.length;
        HashMap<Integer, Integer> map = new HashMap<>();

        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] == nums[j] && Math.abs(i - j) <= k) {
                    return true;
                }
            }
        }
        return false;
    }

    public static boolean HashMapApproach(int[] nums, int k) {
        int n = nums.length;
        HashMap<Integer, Integer> map = new HashMap<>();

        for (int i = 0; i < n; i++) {
            if (map.containsKey(nums[i])) {
                int j = map.get(nums[i]);
                int cal = Math.abs(i - j);
                if (cal <= k) {
                    return true;
                }
            }
            map.put(nums[i], i);
        }
        return false;
    }

    public static boolean SlidingWindowHashSetApproach(int[] nums, int k) {
        int n = nums.length;
        HashSet<Integer> set = new HashSet<>();

        for (int i = 0; i < n; i++) {
            if (set.contains(nums[i])) {
                return true;
            }
            set.add(nums[i]);

            if (set.size() >= k) {
                set.remove(nums[i - k]);
            }
        }
        return false;
    }

    public static void main(String[] args) {

    }
}
