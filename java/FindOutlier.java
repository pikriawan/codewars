/**
 * Tanggal: 19 Juli 2026
 * Link: https://www.codewars.com/kata/5526fc09a1bbd946250002dc/train/java
 */

public class FindOutlier {
    public static void main(String[] args) {
        System.out.println(find(new int[] {2, 4, 5}));
    }

    public static int find(int[] integers) {
        int oddsLength = 0;
        int evensLength = 0;

        int result = integers[0];

        for (int i = 0; i < integers.length; i++) {
            if (integers[i] % 2 == 0) {
                evensLength++;
            } else {
                oddsLength++;
            }

            if (oddsLength == 2 || evensLength == 2) {
                break;
            }
        }

        if (oddsLength == 2) {
            for (int i = 0; i < integers.length; i++) {
                if (integers[i] % 2 == 0) {
                    result = integers[i];
                    break;
                }
            }
        } else {
            for (int i = 0; i < integers.length; i++) {
                if (integers[i] % 2 != 0) {
                    result = integers[i];
                    break;
                }
            }
        }

        return result;
    }
}
