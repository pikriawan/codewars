/**
 * Tanggal: 31 Maret 2025
 * Link: https://www.codewars.com/kata/513e08acc600c94f01000001/train/java
 */

public class RgbToHex {
    public static void main(String[] args) {
        System.out.println(rgb(1, 2, 3));
    }

    public static String decimalToHex(int decimal) {
        if (decimal <= 0) {
            return "00";
        }

        if (decimal > 255) {
            return "FF";
        }

        String hex = "";

        while (decimal != 0) {
            int result = (int) (decimal / 16);
            int remain = decimal % 16;

            switch (remain) {
                case 10:
                    hex = "A" + hex;
                    break;
                case 11:
                    hex = "B" + hex;
                    break;
                case 12:
                    hex = "C" + hex;
                    break;
                case 13:
                    hex = "D" + hex;
                    break;
                case 14:
                    hex = "E" + hex;
                    break;
                case 15:
                    hex = "F" + hex;
                    break;
                default:
                    hex = remain + hex;
            }

            decimal = result;
        }

        while (hex.length() < 2) {
            hex = "0" + hex;
        }

        return hex;
    }

    public static String rgb(int r, int g, int b) {
        return decimalToHex(r) + decimalToHex(g) + decimalToHex(b);
    }
}
