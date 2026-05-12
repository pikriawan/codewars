# Tanggal: 12 Mei 2026
# Link: https://www.codewars.com/kata/57a55c8b72292d057b000594/train/python

def reverse_words(s):
    result = s.split()
    result.reverse()
    return " ".join(result)

if __name__ == "__main__":
    print(reverse_words("Hello world"))
