/**
 * Tanggal: 3 September 2026
 * Link: https://www.codewars.com/kata/54da539698b8a2ad76000228/train/java
 */

public class TenMinWalk {
    public static void main(String[] args) {
        System.out.println(isValid(new char[] {'e', 'w', 'e', 'w', 'n', 's', 'n', 's', 'e', 'w'}));
    }

    public static boolean isValid(char[] walk) {
        if (walk.length != 10) {
            return false;
        }

        int n = 0;
        int s = 0;
        int e = 0;
        int w = 0;

        for (int i = 0; i < walk.length; i++) {
            if (walk[i] == 'n') {
                n++;
            } else if (walk[i] == 's') {
                s++;
            } else if (walk[i] == 'e') {
                e++;
            } else if (walk[i] == 'w') {
                w++;
            }
        }

        if (n == s && e == w) {
            return true;
        }

        return false;
    }
}
