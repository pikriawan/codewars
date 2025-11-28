/**
 * Tanggal: 28 November 2025
 * Link: https://www.codewars.com/kata/5601409514fc93442500010b/train/java
 */

public class BetterThanAverage {
    public static boolean betterThanAverage(int[] classPoints, int yourPoints) {
        int totalClassPoints = 0;

        for (int i = 0; i < classPoints.length; i++) {
            totalClassPoints += classPoints[i];
        }

        float averageClassPoints = totalClassPoints / classPoints.length;

        return yourPoints > averageClassPoints;
    }

    public static void main(String[] args) {
        System.out.println(betterThanAverage(new int[] {2, 3}, 5));
        System.out.println(betterThanAverage(new int[] {8, 6}, 5));
    }
}
