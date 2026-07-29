/**
 * Tanggal: 29 Juli 2026
 * Link: https://www.codewars.com/kata/545cedaa9943f7fe7b000048/train/java
 */

public class PangramChecker {
    public static void main(String[] args) {
        System.out.println(check("The quick brown fox jumps over the lazy dog."));
    }

    public static boolean check(String sentence) {
        String letters = "abcdefghijklmnopqrstuvwxyz";

        for (int i = 0; i < letters.length(); i++) {
            if (!sentence.toLowerCase().contains(String.valueOf(letters.charAt(i)))) {
                return false;
            }
        }

        return true;
    }
}
