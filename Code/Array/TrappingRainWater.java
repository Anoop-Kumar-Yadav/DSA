
public class TrappingRainWater {

    public static int NaiveApproach(int[] height) {
        int n = height.length;

        int res = 0;
        for (int i = 0; i < n; i++) {

            int left = height[i];
            // Find left largest boundary
            for (int j = 0; j < i; j++) {
                left = Math.max(left, height[j]);
            }

            // Find right highest boundary
            int right = height[i];
            for (int j = i + 1; j < n; j++) {
                right = Math.max(right, height[j]);
            }

            res = res + Math.min(left, right) - height[i];
        }
        return res;
    }

    public static int PrefixArrayApproach(int[] height) {
        int n = height.length;

        int[] right_max = new int[n];
        int[] left_max = new int[n];

        right_max[n - 1] = height[n - 1];
        left_max[0] = height[0];

        for (int i = 1; i < n; i++) {
            left_max[i] = Math.max(height[i], left_max[i - 1]);
        }

        for (int i = n - 2; i >= 0; i--) {
            right_max[i] = Math.max(height[i], right_max[i + 1]);
        }

        int res = 0;
        for (int i = 0; i < n; i++) {

            res = res + Math.min(left_max[i], right_max[i]) - height[i];
        }
        return res;
    }

    public static int TwoPointerApproach(int[] height) {
        int n = height.length;

        int rightmax = 0;
        int leftmax = 0;

        int left = 0;
        int right = n - 1;

        int res = 0;

        while (left < right) {

            if (height[left] < height[right]) {
                if (height[left] < leftmax) {
                    res += leftmax - height[left];
                } else {
                    leftmax = height[left];
                }
                left++;

            } else {
                if (height[right] < rightmax) {
                    res += rightmax - height[right];
                } else {
                    rightmax = height[right];
                }
                right--;
            }
        }
        return res;
    }

    public static void main(String[] args) {

    }
}
