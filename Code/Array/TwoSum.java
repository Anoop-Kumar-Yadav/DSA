
import java.util.Arrays;
import java.util.HashMap;

class Pair {

    int index;
    int value;

    public Pair(int index, int value) {
        this.index = index;
        this.value = value;
    }
}

public class TwoSum {

    public static int[] BruteForce(int[] nums, int target) {
        int n = nums.length;

        for (int i = 0; i < n-1; i++) {
            for (int j = i + 1; j < n; j++) {
                int sum = nums[i] + nums[j];
                if (sum == target) {
                    return new int[]{i, j};
                }
            }
        }
        return new int[]{-1, -1};
    }

    public static int[] SortingTwoPointer(int[] nums, int target) {
        int n = nums.length;
        Pair[] arr = new Pair[n];

        for (int i = 0; i < n; i++) {
            Pair data = new Pair(i, nums[i]);
            arr[i] = data;
        }

        Arrays.sort(arr, (a, b) -> a.value - b.value);

        int left = 0;
        int right = n - 1;
        while (left < right) {
            int sum = arr[left].value + arr[right].value;
            if (sum == target) {
                return new int[]{arr[left].index, arr[right].index};
            }
            if (sum < target) {
                left++;
            }
            if (sum > target) {
                right--;
            }
        }
        return new int[]{-1, -1};
    }

    public static int[] HashMapApproach(int[] nums, int target) {
        int n = nums.length;

        HashMap <Integer,Integer> hashmap = new HashMap<>();
        
        for (int i = 0; i < n; i++) {
            int complement = target - nums[i];

            if (hashmap.containsKey(complement)) {
                return new int[]{hashmap.get(complement),i};
            }
            hashmap.put(nums[i], i);
        }
        return new int[]{-1,-1};
    }

    public static void main(String[] args) {
        int[] arr = {0,6};
        int target = 6;
        int[] sol = HashMapApproach(arr, target);
        System.out.println(Arrays.toString(sol));
    }
}
