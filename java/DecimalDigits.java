/**
 * Tanggal 30 Juli 2026
 * Link: https://www.codewars.com/kata/58fa273ca6d84c158e000052/train/java
 */

public class DecimalDigits {
    public static void main(String[] args) {
        System.out.println(digits(9999));
    }

    public static int digits(long n) {
        return String.valueOf(n).length();
    }
}
