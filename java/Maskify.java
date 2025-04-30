/**
 * Tanggal: 30 April 2025
 * Link: https://www.codewars.com/kata/5412509bd436bd33920011bc/train/java
 */

public class Maskify {
    public static void main(String[] args) {
        System.out.println(maskify("4556364607935616"));
    }

    public static String maskify(String str) {
        String result = "";
        int i = str.length() - 1;
        int j = 0;

        while (i >= 0) {
            if (j < 4) {
                j++;
                result = str.charAt(i) + result;
            } else {
                result = "#" + result;
            }

            i--;
        }

        return result;
    }
}
