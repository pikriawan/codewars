/**
 * Tanggal: 26 Agustus 2026
 * Link: https://www.codewars.com/kata/515e271a311df0350d00000f/train/java
 */

public class SquareSum {
    public static void main(String[] args) {
        System.out.println(squareSum(new int[] {1, 2, 2}));
    }

    public static int squareSum(int[] n) {
        int result = 0;

        for (int i = 0; i < n.length; i++) {
            result += n[i] * n[i];
        }

        return result;
    }
}
