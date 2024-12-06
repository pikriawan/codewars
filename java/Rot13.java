/**
 * Tanggal: 6/12/2024
 * Link: https://www.codewars.com/kata/530e15517bc88ac656000716/train/java
 */

import java.util.ArrayList;

public class Rot13 {
    public static void main(String[] args) {
        System.out.println(rot13("$Abcxyz"));
    }

    public static ArrayList<Character> charArrayToCharArrayList(char[] array) {
        ArrayList<Character> arrayList = new ArrayList<>();

        for (char letter : array) {
            arrayList.add(letter);
        }

        return arrayList;
    }

    public static String rot13(String str) {
        ArrayList<Character> letters = charArrayToCharArrayList(new char[]{'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'});
        ArrayList<Character> result = new ArrayList<>();
        String resultStr = "";

        for (int i = 0; i < str.length(); i++) {
            int index = letters.indexOf(Character.toLowerCase(str.charAt(i)));

            if (index == -1) {
                result.add(str.charAt(i));
            } else {
                index = index + 13;

                boolean isUpperCase = Character.isUpperCase(str.charAt(i));

                if (index > letters.size() - 1) {
                    index = index - 26;
                }

                if (isUpperCase) {
                    result.add(Character.toUpperCase(letters.get(index)));
                } else {
                    result.add(letters.get(index));
                }
            }
        }

        for (int i = 0; i < result.size(); i++) {
            resultStr += String.valueOf(result.get(i));
        }

        return resultStr;
    }
}
