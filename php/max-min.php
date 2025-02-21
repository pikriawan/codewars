<?php

/**
 * Tanggal: 21/2/2025
 * Link: https://www.codewars.com/kata/577a98a6ae28071780000989/train/php
 */

function maximum($numbers) {
    $max = $numbers[0];

    for ($i = 0; $i < count($numbers); $i++) {
        if ($numbers[$i] > $max) {
            $max = $numbers[$i];
        }
    }

    return $max;
}

function minimum($numbers) {
    $min = $numbers[0];

    for ($i = 0; $i < count($numbers); $i++) {
        if ($numbers[$i] < $min) {
            $min = $numbers[$i];
        }
    }

    return $min;
}

echo maximum(array(10, 2, 5, 7, 11, 9)) . "\n";
echo minimum(array(10, 2, 5, 7, 11, 9)) . "\n";
