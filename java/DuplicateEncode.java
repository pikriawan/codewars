/**
 * Tanggal: 31 Juli 2026
 * Link: https://www.codewars.com/kata/54b42f9314d9229fd6000d9c/train/java
 */

public class DuplicateEncoder {
    public static void main(String[] args) {
        System.out.println(encode("Amazing"));
    }

    public static int countLetter(char letter, String word) {
        int result = 0;

        char letterLower = String.valueOf(letter).toLowerCase().charAt(0);
        String wordLower = word.toLowerCase();

        for (int i = 0; i < wordLower.length(); i++) {
            if (wordLower.charAt(i) == letterLower) {
                result++;
            }
        }

        return result;
    }

    public static String encode(String word) {
        String[] result = new String[word.length()];

        for (int i = 0; i < word.length(); i++) {
            if (countLetter(word.charAt(i), word) > 1) {
                result[i] = ")";
            } else {
                result[i] = "(";
            }
        }

        return String.join("", result);
    }
}
