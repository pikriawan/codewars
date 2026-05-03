# Tanggal: 3 Mei 2026
# Link: https://www.codewars.com/kata/559590633066759614000063/train/python

def min_max(lst):
    min = lst[0]
    max = lst[0]
    for num in lst:
        if num < min:
            min = num
        if num > max:
            max = num
    return [min, max]

if __name__ == "__main__":
    print(min_max([1, 2, 3, 4, 5]))
