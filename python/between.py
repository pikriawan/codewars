# Tanggal: 10 Mei 2026
# Link: https://www.codewars.com/kata/55ecd718f46fba02e5000029/train/python

def between(a, b):
    result = []
    i = a
    while i <= b:
        result.append(i)
        i += 1
    return result

if __name__ == "__main__":
    print(between(1, 4))
