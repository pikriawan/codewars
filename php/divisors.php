<?php

/**
 * Tanggal: 5/3/2025
 * Link: https://www.codewars.com/kata/542c0f198e077084c0000c2e/train/php
 */

function divisors(int $n): int {
    $i = 0;

    for ($j = $n; $j > 0; $j--) {
        if ($n % $j === 0) {
            $i++;
        }
    }

    return $i;
}

echo divisors(4) . "\n";
echo divisors(20) . "\n";
