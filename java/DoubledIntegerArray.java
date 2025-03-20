/**
 * Tanggal: 20/3/25
 * Link: https://www.codewars.com/kata/57f781872e3d8ca2a000007e/train/java
 */

import java.util.Arrays;

public class DoubledIntegerArray {
    public static void main(String[] args) {
        int[] nums = {1, 2, 3};
        int[] doubledNums = map(nums);
        System.out.println(Arrays.toString(nums));
        System.out.println(Arrays.toString(doubledNums));
    }

    public static int[] map(int[] nums) {
        int[] result = new int[nums.length];

        for (int i = 0; i < nums.length; i++) {
            result[i] = nums[i] * 2;
        }

        return result;
    }
}
