/**
 * Tanggal: 3 Desember 2025
 * Link: https://www.codewars.com/kata/5390bac347d09b7da40006f6/train/java
 */

public class JadenCase {
    private String capitalize(String word) {
        if (word == null || word == "") {
            return null;
        }

        String[] letters = new String[word.length()];

        for (int i = 0; i < word.length(); i++) {
            letters[i] = String.valueOf(word.charAt(i));
        }

        letters[0] = letters[0].toUpperCase();
        return String.join("", letters);
    }

    public String toJadenCase(String phrase) {
        if (phrase == null || phrase == "") {
            return null;
        }

        String[] words = phrase.split(" ");

        for (int i = 0; i < words.length; i++) {
            words[i] = capitalize(words[i]);
        }

        return String.join(" ", words);
    }

    public static void main(String[] args) {
        JadenCase jd = new JadenCase();
        String result = jd.toJadenCase("most trees are blue");
        System.out.println(result);
    }
}
