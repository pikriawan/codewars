/**
 * Tanggal: 16 Juli 2026
 * Link: https://www.codewars.com/kata/55f8a9c06c018a0d6e000132/train/java
 */

public class PinValidator {
    public static void main(String[] args) {
        System.out.println(validatePin("1234"));
        System.out.println(validatePin("12345"));
        System.out.println(validatePin("a234"));
    }

    public static boolean validatePin(String pin) {
        if (pin.length() != 6 && pin.length() != 4) {
            return false;
        }

        String nums = "0123456789";

        for (int i = 0; i < pin.length(); i++) {
            if (!nums.contains(String.valueOf(pin.charAt(i)))) {
                return false;
            }
        }

        return true;
    }
}
