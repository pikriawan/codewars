# Tanggal: 11 Mei 2026
# Link: https://www.codewars.com/kata/57cc981a58da9e302a000214/train/python

def small_enough(array, limit):
    for num in array:
        if num > limit:
            return False
    return True

if __name__ == "__main__":
    print(small_enough([66, 101], 200))
    print(small_enough([66, 201], 200))
