/**
 * Tanggal: 5 Agustus 2026
 * Link: https://www.codewars.com/kata/542c0f198e077084c0000c2e/train/java
 */

public class FindDivisor {
    public static void main(String[] args) {
        System.out.println(numberOfDivisors(100));
    }

    public long numberOfDivisors(int n) {
        int i = 0;

        for (int j = n; j > 0; j--) {
            if (n % j == 0) {
                i++;
            }
        }

        return i;
    }
}
