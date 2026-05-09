# Tanggal: 9 Mei 2026
# Link: https://www.codewars.com/kata/5174a4c0f2769dd8b1000003/train/python

def sort_numbers(numbers):
    if numbers == None:
        return []
    result = numbers[:]
    i = 0
    while i < len(result):
        j = i + 1
        while j < len(result):
            if result[i] > result[j]:
                temp = result[i]
                result[i] = result[j]
                result[j] = temp
            j += 1
        i += 1
    return result

if __name__ == "__main__":
    print(sort_numbers([5, 2, 3, 4, 1]))
