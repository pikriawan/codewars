/**
 * Tanggal: 28 Juli 2026
 * Link: https://www.codewars.com/kata/5839edaa6754d6fec10000a2/train/java
 */

public class FindMissingLetter {
    public static void main(String[] args) {
        System.out.println(findMissingLetter(new char[] {'b', 'c', 'd', 'e', 'g'}));
    }

    public static char findMissingLetter(char[] array) {
        boolean isUpperCase = String.valueOf(array[0]).equals(String.valueOf(array[0]).toUpperCase());
        String letters = isUpperCase ? "ABCDEFGHIJKLMNOPQRSTUVWXYZ" : "abcdefghijklmnopqrstuvwxyz";

        int firstLetterIndex = -1;

        for (int i = 0; i < letters.length(); i++) {
            if (letters.charAt(i) == array[0]) {
                firstLetterIndex = i;
                break;
            }
        }

        for (int i = 0; i < array.length; i++) {
            if (array[i] != letters.charAt(firstLetterIndex + i)) {
                return letters.charAt(firstLetterIndex + i);
            }
        }

        return ' ';
    }
}
