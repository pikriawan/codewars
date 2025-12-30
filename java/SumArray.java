/**
 * Tanggal: 30 Desember 2025
 * Link: https://www.codewars.com/kata/53dc54212259ed3d4f00071c/train/java
 */

public class SumArray {
    public static void main(String[] args) {
        System.out.println(sum(new double[] {}));
        System.out.println(sum(new double[] {1, 2, 3}));
    }

    public static double sum(double[] numbers) {
        double result = 0;

        for (double number : numbers) {
            result += number;
        }

        return result;
    }
}
