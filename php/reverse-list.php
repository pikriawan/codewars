<?php

# Tanggal: 13 Juli 2026
# Link: https://www.codewars.com/kata/53da6d8d112bd1a0dc00008b/train/php


function reverse_list(array $list) {
    $copy = $list;
    $half = ((int) (count($copy) / 2));

    for ($i = 0; $i < $half; $i++) {
        $target = count($copy) - $i - 1;
        $temp = $copy[$i];
        $copy[$i] = $copy[$target];
        $copy[$target] = $temp;
    }

    return $copy;
}

$result = reverse_list([1, 2, 3, 4, 5]);

foreach ($result as $item) {
    echo $item . PHP_EOL;
}
