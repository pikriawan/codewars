<?php
# Tanggal: 4 Juli 2026
# Link: https://www.codewars.com/kata/557cd6882bfa3c8a9f0000c1/train/php

function get_age($response) {
    return intval($response[0]);
}

echo get_age("3 years old") . PHP_EOL;
