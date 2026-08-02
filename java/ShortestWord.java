/**
 * Tanggal: 2 Agustus 2026
 * Link: https://www.codewars.com/kata/57cebe1dc6fdc20c57000ac9/train/java
 */

public class ShortestWord {
    public static void main(String[] args) {
        System.out.println(findShort("bitcoin take over the world maybe who knows perhaps"));
    }

    public static int findShort(String s) {
        String[] words = s.split(" ");

        int result = words[0].length();

        for (int i = 1; i < words.length; i++) {
            if (words[i].length() < result) {
                result = words[i].length();
            }
        }

        return result;
    }
}
