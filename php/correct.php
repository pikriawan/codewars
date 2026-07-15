<?php

# Tanggal: 15 Juli 2026
# Link: https://www.codewars.com/kata/577bd026df78c19bca0002c0/train/php


function correct($string) {
    $result = $string;

    for ($i = 0; $i < strlen($result); $i++) {
        if ($result[$i] === "5") {
            $result[$i] = "S";
        } else if ($result[$i] === "0") {
            $result[$i] = "O";
        } else if ($result[$i] === "1") {
            $result[$i] = "I";
        }
    }

    return $result;
}

echo correct("L0ND0N"), PHP_EOL;
