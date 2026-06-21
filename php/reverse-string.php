<?php

# Tanggal: 21 Juni 2026
# Link: https://www.codewars.com/kata/5168bb5dfe9a00b126000018/train/php

function reverse_string(string $str): string {
    $result = $str;

    for ($i = 0; $i < (int) (strlen($result) / 2); $i++) {
        $j = strlen($result) - $i - 1;
        $tmp = $result[$i];
        $result[$i] = $result[$j];
        $result[$j] = $tmp;
    }

    return $result;
}

echo reverse_string("hello") . PHP_EOL;
