/**
 * Tanggal: 15/12/2024
 * Link: https://www.codewars.com/kata/54a91a4883a7de5d7800009c/train/java
 */

import java.math.BigInteger;
import java.util.ArrayList;

public class StringIncrementer {
    public static void main(String[] args) {
        System.out.println(incrementString("foo99"));
        System.out.println(incrementString("bar"));
        System.out.println(incrementString("99999999999999999999"));
    }

    public static int findNumberPartIndex(String string) {
        ArrayList<String> numbers = new ArrayList<>();
        numbers.add("0");
        numbers.add("1");
        numbers.add("2");
        numbers.add("3");
        numbers.add("4");
        numbers.add("5");
        numbers.add("6");
        numbers.add("7");
        numbers.add("8");
        numbers.add("9");

        int index = string.length();

        for (int i = string.length() - 1; i >= 0; i--) {
            if (numbers.contains(String.valueOf(string.charAt(i)))) {
                index = i;
            } else {
                break;
            }
        }

        return index;
    }

    public static String incrementNumber(String numberString) {
        String resultString = numberString;
        BigInteger number = new BigInteger(resultString);
        BigInteger result = number.add(BigInteger.ONE);
        resultString = result.toString();

        while (resultString.length() < numberString.length()) {
            resultString = "0" + resultString;
        }

        return resultString;
    }

    public static String incrementString(String string) {
        int numberPartIndex = findNumberPartIndex(string);

        String stringPart = string.substring(0, numberPartIndex);
        String numberPart = "0";

        if (numberPartIndex != string.length()) {
            numberPart = string.substring(numberPartIndex, string.length());
        }

        numberPart = incrementNumber(numberPart);

        return stringPart + numberPart;
    }
}
