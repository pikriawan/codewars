<?php

/**
 * Tanggal: 29 November 2025
 * Link: https://www.codewars.com/kata/53dc23c68a0c93699800041d/train/php
 */

function smash(array $words): string {
    return implode(" ", $words);
}

echo smash(["hello", "world"]), PHP_EOL;
