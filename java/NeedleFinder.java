/**
 * Tanggal: 26 Desember 2025
 * Link: https://www.codewars.com/kata/56676e8fabd2d1ff3000000c/train/java
 */

public class NeedleFinder {
    public static String findNeedle(Object[] hayStack) {
        for (int i = 0; i < hayStack.length; i++) {
            if (hayStack[i] instanceof String && hayStack[i].equals("needle")) {
                return "found the needle at position " + i;
            }
        }

        return null;
    }

    public static void main(String[] args) {
        System.out.println(findNeedle(new Object[] {"3", "123", null, "needle"}));
        System.out.println(findNeedle(new Object[] {"3", "123", null}));
    }
}
