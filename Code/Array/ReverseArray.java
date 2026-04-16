
import java.util.Arrays;

public class ReverseArray {

    public static int[] NaiveApproach(int[] nums) {
        int n = nums.length;

        int[] newArr = new int[n];

        for (int i = n - 1; i >= 0; i--) {
            newArr[n - 1 - i] = nums[i];
        }

        return newArr;
    }

    public static void SwapApproach(int[] nums) {
        int n = nums.length;

        int left = 0;
        int right = n - 1;

        while (left < right) {
            int temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;

            left++;
            right--;
        }
    }

    public static void main(String[] args) {
        int[] arr = {1, 2, 4, 5, 6};

        int[] revArr = NaiveApproach(arr);
        SwapApproach(arr);

        System.out.println(Arrays.toString(arr));
        System.out.println(Arrays.toString(revArr));
    }
}
