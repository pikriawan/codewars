/**
 * Tanggal: 26 Maret 2025
 * Link: https://www.codewars.com/kata/53da3dbb4a5168369a0000fe/train/java
 */

public class EvenOrOdd {
    public static void main(String[] args) {
        System.out.println(evenOrOdd(1));
        System.out.println(evenOrOdd(2));
        System.out.println(evenOrOdd(-1));
    }

    public static String evenOrOdd(int number) {
        if (number % 2 == 0) {
            return "Even";
        }

        return "Odd";
    }
}
