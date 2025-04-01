/**
 * Tanggal: 1 April 2025
 * Link: https://www.codewars.com/kata/52fba66badcd10859f00097e/train/java
 */

public class Troll {
    public static void main(String[] args) {
        System.out.println(disemvowel("This website is for losers LOL!"));
    }

    public static String disemvowel(String str) {
        return String.join("", str.split("[aiueoAIUEO]"));
    }
}
