/**
 * Tanggal: 17 Juli 2026
 * Link: https://www.codewars.com/kata/5656b6906de340bd1b0000ac/train/java
 */

import java.util.Arrays;
import java.util.Set;
import java.util.HashSet;

public class TwoToOne {
    public static void main(String[] args) {
        System.out.println(longest("xyz", "abc"));
    }

    public static String longest(String s1, String s2) {
        Set<Character> chars = new HashSet<>();

        for (int i = 0; i < s1.length(); i++) {
            chars.add(s1.charAt(i));
        }

        for (int i = 0; i < s2.length(); i++) {
            chars.add(s2.charAt(i));
        }

        Character[] result = chars.toArray(new Character[0]);
        Arrays.sort(result);

        StringBuilder sb = new StringBuilder();

        for (char c : result) {
            sb.append(c);
        }

        return sb.toString();
    }
}
