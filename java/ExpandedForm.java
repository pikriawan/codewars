/**
 * Tanggal: 14/12/2024
 * Link: https://www.codewars.com/kata/5842df8ccbd22792a4000245/train/java
 */

import java.util.ArrayList;

public class ExpandedForm {
    public static void main(String[] args) {
        System.out.println(expandedForm(12));
        System.out.println(expandedForm(42));
        System.out.println(expandedForm(70304));
    }

    public static String expandedForm(int num) {
        String numStr = String.valueOf(num);
        ArrayList<String> result = new ArrayList<>();

        for (int i = 0; i < numStr.length(); i++) {
            boolean isZero = numStr.charAt(i) == '0';

            if (!isZero) {
                String part = String.valueOf(numStr.charAt(i));
                int zeros = numStr.length() - (i + 1);

                for (int j = 0; j < zeros; j++) {
                    part += "0";
                }

                result.add(part);
            }
        }

        return String.join(" + ", result);
    }
}
