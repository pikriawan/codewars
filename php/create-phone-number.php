<?php

/**
 * Tanggal: 6 Mei 2025
 * Link: https://www.codewars.com/kata/525f50e3b73515a6db000b83/train/php
 */

function createPhoneNumber($numbers) {
    $result = '(';

    for ($i = 0; $i < 3; $i++) {
        $result .= $numbers[$i];
    }

    $result .= ') ';

    for ($i = 3; $i < 6; $i++) {
        $result .= $numbers[$i];
    }

    $result .= '-';

    for ($i = 6; $i < count($numbers); $i++) {
        $result .= $numbers[$i];
    }

    return $result;
}

echo createPhoneNumber([1, 2, 3, 4, 5, 6, 7, 8, 9, 0]);
