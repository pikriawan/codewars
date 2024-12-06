/**
 * Tanggal: 5/12/2024
 * Link: https://www.codewars.com/kata/523f5d21c841566fde000009/train/java
 */

import java.util.ArrayList;
import java.util.Arrays;

public class ArrayDiff {
    public static void main(String[] args) {
        int[] a = {1, 2, 2, 3};
        int[] b = {2};
        System.out.println(Arrays.toString(arrayDiff(a, b)));
    }

    public static int[] toArray(ArrayList<Integer> arrayList) {
        int[] result = new int[arrayList.size()];

        for (int i = 0; i < arrayList.size(); i++) {
            result[i] = arrayList.get(i);
        }

        return result;
    }

    public static int[] arrayDiff(int[] a, int[] b) {
        ArrayList<Integer> result = new ArrayList<>();

        for (int i = 0; i < a.length; i++) {
            for (int j = 0; j < b.length; j++) {
                if (a[i] != b[j]) {
                    result.add(a[i]);
                }
            }
        }

        return toArray(result);
    }
}
