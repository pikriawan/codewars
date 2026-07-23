/**
 * Tanggal: 23 Juli 2026
 * Link: https://www.codewars.com/kata/59a1cdde9f922b83ee00003b/train/java
 */

public class StantonMeasure {
    public static void main(String[] args) {
        System.out.println(stantonMeasure(new int[] {1, 4, 3, 2, 1, 2, 3, 2}));
    }

    public static int stantonMeasure(int[] arr) {
        int oneLength = 0;

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == 1) {
                oneLength++;
            }
        }

        int nLength = 0;

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == oneLength) {
                nLength++;
            }
        }

        return nLength;
    }
}
