/**
 * Tanggal: 30 April 2025
 * Link: https://www.codewars.com/kata/514b92a657cdc65150000006/train/java
 */

public class MultiplesOf3Or5 {
    public static void main(String[] args) {
        System.out.println(multiplesOf3Or5(10));
    }

    public static int multiplesOf3Or5(int number) {
        int result = 0;
        int i = 1;

        while (i < number) {
            if (i % 3 == 0 || i % 5 == 0) {
                result += i;
            }

            i++;
        }

        return result;
    }
}
