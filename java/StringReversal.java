/**
 * Tanggal: 8 Agustus 2026
 * Link: https://www.codewars.com/kata/5a8d1c82373c2e099d0000ac/train/java
 */

public class StringReversal {
    public static void main(String[] args) {
        System.out.println(reverse("codewars", 1, 5));
    }

    public static String reverse(String s, int a, int b) {
        int min = Math.min(b + 1, s.length());
        return s.substring(0, a)
            + new StringBuilder(s.substring(a, min)).reverse().toString()
            + s.substring(min);
    }
}
