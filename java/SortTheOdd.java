/**
 * Tanggal: 4/12/2024
 * Link: https://www.codewars.com/kata/578aa45ee9fd15ff4600090d/train/java
 */

import java.util.Arrays;

public class SortTheOdd {
    public static void main(String[] args) {
        int[] numbers = {1, 5, 6, 6, 3, 20, 9, 17, 15, 4, 100};
        int[] sortedNumbers = sortArray(numbers);
        System.out.println(Arrays.toString(sortedNumbers));
    }

    public static boolean isOdd(int number) {
        return number % 2 != 0;
    }

    public static void swap(int[] array, int indexA, int indexB) {
        int temp = array[indexA];
        array[indexA] = array[indexB];
        array[indexB] = temp;
    }

    public static boolean shouldSwap(int[] array, int indexA, int indexB) {
        boolean result = false;

        if (isOdd(array[indexA]) && isOdd(array[indexB])) {
            result = array[indexA] > array[indexB];
        }

        return result;
    }

    public static int[] sortArray(int[] array) {
        int[] sorted = new int[array.length];
        System.arraycopy(array, 0, sorted, 0, array.length);

        for (int i = 0; i < sorted.length; i++) {
            for (int j = i + 1; j < sorted.length; j++) {
                if (shouldSwap(sorted, i, j)) {
                    swap(sorted, i, j);
                }
            }
        }

        return sorted;
    }
}
