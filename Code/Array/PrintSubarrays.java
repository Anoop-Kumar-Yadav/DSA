
public class PrintSubarrays {

    public static void NaiveApproach(int[] nums) {
        int n = nums.length;

        for (int i = 0; i < n; i++) {
            for (int j = i ; j < n; j++) {
                System.out.print("{ ");
                for (int k = i; k <= j; k++) {
                    System.out.print(nums[k] + ",");
                }
                System.out.print(" } ");
            }
            System.out.println("");
        }
    }

    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 5};
        NaiveApproach(arr);
    }
}
