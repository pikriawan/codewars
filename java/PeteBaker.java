/**
 * Tanggal: 10/12/2024
 * Link: https://www.codewars.com/kata/525c65e51bf619685c000059/train/java
 */

import java.util.HashMap;
import java.util.Map;

public class PeteBaker {
    public static void main(String[] args) {
        Map<String, Integer> recipe = new HashMap<>();

        recipe.put("flour", 500);
        recipe.put("sugar", 200);
        recipe.put("eggs", 1);

        Map<String, Integer> available = new HashMap<>();

        available.put("flour", 1500);
        available.put("sugar", 1300);
        available.put("eggs", 5);

        System.out.println(cakes(recipe, available));
    }

    public static int cakes(Map<String, Integer> recipe, Map<String, Integer> available) {
        int[] count = new int[recipe.size()];
        int min = Integer.MAX_VALUE;

        int i = 0;

        for (Map.Entry<String, Integer> r : recipe.entrySet()) {
            String name = r.getKey();
            int value = r.getValue();

            if (available.containsKey(name)) {
                count[i] = (int) available.get(r.getKey()) / r.getValue();
            } else {
                count[i] = 0;
            }

            i++;
        }

        for (int c : count) {
            if (c < min) {
                min = c;
            }
        }

        return min;
    }
}
