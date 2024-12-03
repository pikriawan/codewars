/**
 * Tanggal: 3/12/2024
 * Link: https://www.codewars.com/kata/554ca54ffa7d91b236000023/train/java
 */

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;

public class EnoughIsEnough {
    public static void main(String[] args) {
        int[] result = deleteNth(new int[]{20, 37, 20, 21}, 1);

        for (int element : result) {
            System.out.println(element);
        }
    }

    public static int[] arrayListToArray(ArrayList<Integer> array) {
        int[] result = new int[array.size()];

        for (int i = 0; i < array.size(); i++) {
            result[i] = array.get(i);
        }
        
        return result;
    }

    public static int[] deleteNth(int[] elements, int maxOccurrences) {
        ArrayList<Integer> result = new ArrayList<>();
        Map<Integer, Integer> counter = new HashMap<>();

        for (int e : elements) {
            if (!counter.containsKey(e)) {
                counter.put(e, 1);
            }
        }

        for (int e: elements) {
            if (result.contains(e) && counter.get(e) > maxOccurrences) {
                continue;
            }

            result.add(e);
            counter.put(e, counter.get(e) + 1);
        }

        return arrayListToArray(result);
    }
}
