<?php

/**
 * Tanggal: 21/2/2025
 * Link: https://www.codewars.com/kata/55685cd7ad70877c23000102/train/php
 */

function makeNegative($number) {
    if ($number === 0) {
        return 0;
    }

    if ($number < 0) {
        return $number;
    }

    return 0 - $number;
}

echo makeNegative(7) . "\n";
echo makeNegative(-20) . "\n";
echo makeNegative(0) . "\n";
echo makeNegative(0.12) . "\n";
