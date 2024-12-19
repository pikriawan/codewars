/**
 * Tanggal: 19/12/2024
 * Link: https://www.codewars.com/kata/57eb8fcdf670e99d9b000272/train/java
 */

public class HighestWordScoring {
    public static final int FIRST_LETTER_INDEX = 96;

    public static void main(String[] args) {
        System.out.println(high("b aa"));
        System.out.println(high("aa b"));
    }

    public static int getScore(String word) {
        int result = 0;

        for (int i = 0; i < word.length(); i++) {
            result += ((int) word.charAt(i) - FIRST_LETTER_INDEX);
        }

        return result;
    }

    public static String getHighestWord(Word[] words) {
        String result = "";
        int max = 0;

        for (Word word : words) {
            if (word.score > max) {
                result = word.value;
                max = word.score;
            }
        }

        return result;
    }

    public static String high(String s) {
        String[] wordsString = s.split(" ");
        Word[] words = new Word[wordsString.length];

        for (int i = 0; i < words.length; i++) {
            words[i] = new Word(wordsString[i], getScore(wordsString[i]));
        }

        return getHighestWord(words);
    }
}

class Word {
    public String value;
    public int score;

    public Word(String value, int score) {
        this.value = value;
        this.score = score;
    }
}
