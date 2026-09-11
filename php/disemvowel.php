<?php

# Tanggal: 11 September 2026
# Link: https://www.codewars.com/kata/52fba66badcd10859f00097e/train/php

function disemvowel(string $s): string {
    $chars = str_split($s);

    $chars = array_filter($chars, function($c) {
        return !in_array($c, ["a", "i", "u", "e", "o", "A", "I", "U", "E", "O"]);
    });

    return implode("", $chars);
}

echo disemvowel("This website is for losers LOL!") . PHP_EOL;
