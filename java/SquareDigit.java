/**
 * Tanggal: 12 Agustus 2026
 * Link: https://www.codewars.com/kata/546e2562b03326a88e000020/train/java
 */

public class SquareDigit {
    public static void main(String[] args) {
        System.out.println(squareDigits(9119));
    }

    public static int squareDigits(int n) {
        String nStr = String.valueOf(n);
        String resultStr = "";

        for (int i = 0; i < nStr.length(); i++) {
            int digit = Integer.parseInt(String.valueOf(nStr.charAt(i)));
            resultStr += String.valueOf(digit * digit);
        }

        return Integer.parseInt(resultStr);
    }
}
