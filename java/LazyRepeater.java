/**
 * Tanggal: 3 Desember 2025
 * Link: https://www.codewars.com/kata/51fc3beb41ecc97ee20000c3/train/java
 */

import java.util.concurrent.atomic.AtomicInteger;
import java.util.function.Supplier;

public class LazyRepeater {
    public static Supplier<Character> makeLooper(String str) {
        AtomicInteger iterator = new AtomicInteger();

        return (() -> {
            if (iterator.get() >= str.length()) {
                iterator.set(0);
            }

            return str.charAt(iterator.getAndIncrement());
        });
    }

    public static void main(String[] args) {
        Supplier<Character> looper = makeLooper("abc");
        System.out.println(looper.get());
        System.out.println(looper.get());
        System.out.println(looper.get());
        System.out.println(looper.get());
        System.out.println(looper.get());
        System.out.println(looper.get());
    }
}
