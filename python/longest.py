# Tanggal: 1 Mei 2026
# Link: https://www.codewars.com/kata/5656b6906de340bd1b0000ac/train/python

def longest(s1, s2):
    return "".join(sorted(set(s1 + s2)))

if __name__ == "__main__":
    print(longest("xyaabbbccccdefww", "xxxxyyyyabklmopq"))
