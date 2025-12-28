/**
 * Tanggal: 28 Desember 2025
 * Link: https://www.codewars.com/kata/56606694ec01347ce800001b/train/java
 */

public class TriangleTester {
    public static void main(String[] args) {
        System.out.println(isTriangle(1, 2, 2));
        System.out.println(isTriangle(7, 2, 2));
        System.out.println(isTriangle(2, 2, 2));
    }

    public static boolean isTriangle(int a, int b, int c) {
        return a + b > c &&
            a + c > b &&
            b + c > a;
    }
}
