/**
 * Tanggal: 6 Agustus 2026
 * Link: https://www.codewars.com/kata/5544c7a5cb454edb3c000047/train/java
 */

public class BouncingBall {
    public static void main(String[] args) {
        System.out.println(bouncingBall(3.00, 0.66, 1.5));
    }

    public static int bouncingBall(double h, double bounce, double window) {
        if (h <= 0) {
            return -1;
        }

        if (bounce <= 0 || bounce >= 1) {
            return -1;
        }

        if (window >= h) {
            return -1;
        }

        int count = 1;
        double remaining = h * bounce;

        while (remaining > window) {
            count += 2;
            remaining = remaining * bounce;
        }

        return count;
    }
}
