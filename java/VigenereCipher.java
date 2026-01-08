/**
 * Tanggal: 9 Januari 2026
 * Link: https://www.codewars.com/kata/52d1bd3694d26f8d6e0000d3/train/java
 */

public class VigenereCipher {
    private String key;
    private String abc;

    public static void main(String[] args) {
        VigenereCipher vigenereCipher = new VigenereCipher("secret", "abcdefghijklmnopqrstuvwxyz");

        String original = "Codewars";

        String encoded = vigenereCipher.encode(original);
        System.out.println("Encoded: " + encoded);

        String decoded = vigenereCipher.decode(encoded);
        System.out.println("Decoded: " + decoded);
    }

    public VigenereCipher(String key, String abc) {
        this.key = key;
        this.abc = abc;
    }

    public String encode(String str) {
        char[] result = str.toCharArray();

        for (int i = 0; i < result.length; i++) {
            int characterIndex = abc.indexOf(result[i]);
            int keyCharacterIndex = abc.indexOf(key.charAt(i % key.length()));

            if (characterIndex != -1) {
                result[i] = abc.charAt((characterIndex + keyCharacterIndex) % abc.length());
            }
        }

        return String.valueOf(result);
    }

    public String decode(String str) {
        char[] result = str.toCharArray();

        for (int i = 0; i < result.length; i++) {
            int characterIndex = abc.indexOf(result[i]);
            int keyCharacterIndex = abc.indexOf(key.charAt(i % key.length()));

            if (characterIndex != -1) {
                int originalCharacterIndex = characterIndex - keyCharacterIndex;

                if (originalCharacterIndex < 0) {
                    originalCharacterIndex = abc.length() + originalCharacterIndex;
                }

                result[i] = abc.charAt(originalCharacterIndex);
            }
        }

        return String.valueOf(result);
    }
}
