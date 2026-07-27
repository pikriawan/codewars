/**
 * Tanggal 27 Juli 2026
 * Link: https://www.codewars.com/kata/5667e8f4e3f572a8f2000039/train/java
 */

public class Accum {
    public static void main(String[] args) {
        System.out.println(accum("abcde"));
    }

    public static String accum(String s) {
        String result = "";

        for (int i = 0; i < s.length(); i++) {
            result += String.valueOf(s.charAt(i)).toUpperCase();

            for (int j = 1; j < i + 1; j++) {
                result += String.valueOf(s.charAt(i)).toLowerCase();
            }

            if (i != s.length() - 1) {
                result += "-";
            }
        }

        return result;
    }
}
