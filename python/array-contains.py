# Tanggal: 9 April 2026
# Link: https://www.codewars.com/kata/57cc975ed542d3148f00015b/train/python

def array_contains(array, value):
    for i in array:
        if i == value:
            return True
    return False

if __name__ == "__main__":
    print(array_contains([66, 101], 66))
    print(array_contains([78, 117, 110, 99, 104, 117, 107, 115], 8))
