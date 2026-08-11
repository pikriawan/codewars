/**
 * Tanggal: 11 Agustus 2026
 * Link: https://www.codewars.com/kata/517abf86da9663f1d2000003/train/java
 */

public class ToCamelCase {
    public static void main(String[] args) {
        System.out.println(toCamelCase("The_Stealth-Warrior"));
    }

    public static String toCamelCase(String s) {
        String result = "";
        boolean shouldBeCamelCased = false;

        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '-' || s.charAt(i) == '_') {
                shouldBeCamelCased = true;
                result += " ";
                continue;
            }

            if (shouldBeCamelCased) {
                shouldBeCamelCased = false;
                result += String.valueOf(s.charAt(i)).toUpperCase();
                continue;
            }

            result += String.valueOf(s.charAt(i));
        }

        return result.replaceAll(" ", "");
    }
}
