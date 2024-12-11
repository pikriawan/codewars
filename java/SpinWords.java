/**
 * Tanggal: 12/12/2024
 * Link: https://www.codewars.com/kata/5264d2b162488dc400000001/train/java
 */

public class SpinWords {
    public static void main(String[] args) {
        System.out.println(spinWords("Hello John Doe"));
    }

    public static String spinWord(String word) {
        String result = "";

        for (int i = word.length() - 1; i >= 0; i--) {
            result += word.charAt(i);
        }

        return result;
    }

    public static String spinWords(String sentence) {
        String[] sentenceArray = sentence.split(" ");
        String[] result = new String[sentenceArray.length];

        for (int i = 0; i < result.length; i++) {
            if (sentenceArray[i].length() >= 5) {
                result[i] = spinWord(sentenceArray[i]);
            } else {
                result[i] = sentenceArray[i];
            }
        }

        return String.join(" ", result);
    }
}
