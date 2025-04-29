/**
 * Tanggal: 28 April 2025
 * Link: https://www.codewars.com/kata/5287e858c6b5a9678200083c/train/java
 */

public class NarcissisticNumber {
    public static void main(String[] args) {
        System.out.println(isNarcissistic(153));
        System.out.println(isNarcissistic(1652));
    }

    public static int power(int base, int exponent) {
        int result = 1;

        for (int i = 0; i < exponent; i++) {
            result *= base;
        }

        return result;
    }

    public static boolean isNarcissistic(int number) {
        String numberString = String.valueOf(number);
        int total = 0;

        for (int i = 0; i < numberString.length(); i++) {
            int digit = Integer.parseInt(String.valueOf(numberString.charAt(i)));
            total += power(digit, numberString.length());
        }

        return total == number;
    }
}
