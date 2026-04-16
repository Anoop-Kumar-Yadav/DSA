
public class MaxSubArrayProblem {

    public static int NaiveApproach(int[] nums) {
        int n = nums.length;

        int max = Integer.MIN_VALUE;
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                int sum = 0;
                for (int k = i; k <= j; k++) {
                    sum += nums[k];
                }
                if (sum > max) {
                    max = sum;
                }
            }
        }
        return max;
    }

    public static int PrefixSumApproach(int[] nums) {
        int n = nums.length;

        int[] prefix = new int[n];
        prefix[0] = nums[0];
        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] + nums[i];
        }

        int max = Integer.MIN_VALUE;
        int prev = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                int sum = prefix[j] - prev;
                if (sum > max) {
                    max = sum;
                }
            }
            prev = prefix[i];
        }
        return max;
    }

    public static int KadaneAlgorithm(int[] nums) {
        int n = nums.length;

        int globalmax = Integer.MIN_VALUE;
        int localmax = nums[0];

        for (int i = 1; i < n; i++) {
            localmax += nums[i];
            if (localmax > globalmax) {
                globalmax = localmax;
            }
            if (localmax < 0) {
                localmax = 0;
            }
        }
        return globalmax;
    }

    public static void main(String[] args) {
        int[] arr = {2, 4, 5, 7, 9};
        int res = KadaneAlgorithm(arr);
        System.out.println("Max : " + res);
    }
}
