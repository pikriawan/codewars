# Tanggal: 20 April 2026
# Link: https://www.codewars.com/kata/55d24f55d7dd296eb9000030/train/python

def summation(num):
    result = 0
    i = 1

    while (i <= num):
        result += i
        i += 1

    return result

if __name__ == "__main__":
    print(summation(8))
