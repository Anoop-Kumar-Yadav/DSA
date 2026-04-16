
public class BuySellStock {

    public static int BruteForce(int[] prices) {
        int n = prices.length;

        int max_profit = 0;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                int curr_profit = prices[j] - prices[i];
                if (curr_profit > max_profit) {
                    max_profit = curr_profit;
                }
            }
        }
        return max_profit;
    }

    public static int MinPrefixMaxSuffix(int[] prices) {
        int n = prices.length;

        int[] maxPrices = new int[n];
        int[] minPrices = new int[n];

        maxPrices[n - 1] = prices[n - 1];
        minPrices[0] = prices[0];

        for (int i = 1; i < n; i++) {
            if (prices[i] < minPrices[i - 1]) {
                minPrices[i] = prices[i];
            } else {
                minPrices[i] = minPrices[i - 1];
            }
        }

        for (int i = n - 2; i >= 0; i--) {
            if (prices[i] > maxPrices[i + 1]) {
                maxPrices[i] = prices[i];
            } else {
                maxPrices[i] = maxPrices[i + 1];
            }
        }

        int max = 0;
        for (int i = 0; i < n; i++) {
            int profit = maxPrices[i] - minPrices[i];
            if (profit > max) {
                max = profit;
            }
        }
        return max;
    }

    public static int GreedyApproach(int[] prices) {
        int n = prices.length;

        int max_profit = 0;
        int min = prices[0];
        for (int i = 1; i < n; i++) {
            if (prices[i] < min) {
                min = prices[i];
            }
            max_profit = Math.max(max_profit, prices[i] - min);
        }
        return max_profit;
    }

    public static void main(String[] args) {
        int[] arr = {7, 1, 5, 3, 6, 4};
        int x = GreedyApproach(arr);
        System.err.println(x);
    }
}
