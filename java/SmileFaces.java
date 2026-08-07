/**
 * Tanggal 7 Agustus 2026
 * Link: https://www.codewars.com/kata/583203e6eb35d7980400002a/train/java
 */

import java.util.ArrayList;
import java.util.List;

public class SmileFaces {
    public static void main(String[] args) {
        List<String> arr = new ArrayList<>();
        arr.add(":)");
        arr.add(":D");
        arr.add(":-}");
        System.out.println(countSmileys(arr));
    }

    public static int countSmileys(List<String> arr) {
        int result = 0;

        for (String str : arr) {
            if (check(str)) {
                result++;
            }
        }

        return result;
    }

    public static boolean check(String str) {
        if (str.charAt(0) != ':' && str.charAt(0) != ';') {
            return false;
        }

        if (str.length() == 3) {
            if (str.charAt(1) != '-' && str.charAt(1) != '~') {
                return false;
            }

            if (str.charAt(2) != ')' && str.charAt(2) != 'D') {
                return false;
            }
        } else {
            if (str.charAt(1) != ')' && str.charAt(1) != 'D') {
                return false;
            }
        }

        return true;
    }
}
