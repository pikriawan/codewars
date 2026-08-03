/**
 * Tanggal: 3 Agustus 2026
 * Link: https://www.codewars.com/kata/51f2d1cafc9c0f745c00037d/train/java
 */

public class StringEndsWith {
    public static void main(String[] args) {
        System.out.println(stringEndsWith("Fox", "ox"));
    }

    public static boolean stringEndsWith(String str, String end) {
        return str.endsWith(end);
    }
}
