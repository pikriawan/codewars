<?php

/**
 * Tanggal: 31 Mei 2025
 * Link: https://www.codewars.com/kata/515f51d438015969f7000013/train/php
 */

function pyramid($n) {
    $result = array();

    for ($i = 0; $i < $n; $i++) {
        $result[$i] = array();

        for ($j = 0; $j <= $i; $j++) {
            $result[$i][] = 1;
        }
    }

    return $result;
}

print_r(pyramid(3));
