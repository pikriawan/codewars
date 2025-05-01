/**
 * Tanggal: 1 Mei 2025
 * Link: https://www.codewars.com/kata/53dbd5315a3c69eed20002dd/train/java
 */

import java.util.ArrayList;
import java.util.List;

public class FilterList {
    public static void main(String[] args) {
        System.out.println(filterList(List.of(1, 2, "a", "b")));
    }

    public static List<Object> filterList(final List<Object> list) {
        List<Object> result = new ArrayList<>();

        for (int i = 0; i < list.size(); i++) {
            if (list.get(i) instanceof Integer) {
                result.add(list.get(i));
            }
        }

        return result;
    }
}
