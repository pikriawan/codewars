/**
 * Tanggal: 14/12/2024
 * Link: https://www.codewars.com/kata/51c8e37cee245da6b40000bd/train/java
 */

public class StripComments {
    public static void main(String[] args) {
        System.out.println(stripComments("apples, pears # and bananas\ngrapes\nbananas !apples", new String[]{"#", "!"}));
    }

    public static int findFirstCommentIndex(String str, String[] comments) {
        int result = Integer.MAX_VALUE;

        for (String comment : comments) {
            if (str.indexOf(comment) != -1 && str.indexOf(comment) < result) {
                result = str.indexOf(comment);
            }
        }

        if (result == Integer.MAX_VALUE) {
            return -1;
        }

        return result;
    }

    public static String stripComments(String str, String[] comments) {
        String[] lines = str.split("\n");

        for (int i = 0; i < lines.length; i++) {
            int firstCommentIndex = findFirstCommentIndex(lines[i], comments);

            if (firstCommentIndex != -1) {
                lines[i] = lines[i].substring(0, firstCommentIndex);
            }

            lines[i] = lines[i].stripTrailing();
        }

        return String.join("\n", lines);
    }
}
