import java.util.HashMap;
import java.util.Map;

public class HighestWordScoring {
    public static final int FIRST_LETTER_INDEX = 96;

    public static void main(String[] args) {
        System.out.println(high("i am from x"));
    }

    public static int getScore(String word) {
        int result = 0;

        for (int i = 0; i < word.length(); i++) {
            result += ((int) word.charAt(i) - FIRST_LETTER_INDEX);
        }

        return result;
    }

    public static String getHighestWord(Map<String, Integer> words) {
        String result = "";
        int max = 0;

        for (Map.Entry<String, Integer> word : words.entrySet()) {
            /*if (word.getValue() >= max) {
                max = word.getValue();
                result = word.getKey();
            }*/
            System.out.println(word.getKey());
            System.out.println(word.getValue());
        }

        return result;
    }

    public static String high(String s) {
        Map<String, Integer> words = new HashMap<>();

        for (String word : s.split(" ")) {
            words.put(word, getScore(word));
        }

        return getHighestWord(words);
    }
}
