/**
 * Tanggal: 2 September 2026
 * Link: https://www.codewars.com/kata/56541980fa08ab47a0000040/train/java
 */

public class PrinterErrors {
    public static void main(String[] args) {
        System.out.println(printerError("aaabbbmmmxyz"));
    }

    public static String printerError(String s) {
        int errors = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) > 'm') {
                errors++;
            }
        }

        return errors + "/" + s.length();
    }
}
