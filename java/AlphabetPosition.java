/**
 * Tanggal: 1 Januari 2026
 * Link: https://www.codewars.com/kata/546f922b54af40e1e90001da/train/java
 */

public class AlphabetPosition {
    public static void main(String[] args) {
        System.out.println(alphabetPosition("Abc"));
        System.out.println(alphabetPosition("Xyz"));
        System.out.println(alphabetPosition("The sunset sets at twelve o'clock"));
    }

    static String alphabetPosition(String text) {
        String textLowerCase = text.toLowerCase();
        String result = "";

        for (int i = 0; i < textLowerCase.length(); i++) {
            char character = textLowerCase.charAt(i);
            int position = character - 96;

            if (position > 0 && position < 27) {
                result += position + " ";
            }
        }

        return result.trim();
    }
}
