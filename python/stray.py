# Tanggal: 2 Mei 2026
# Link: https://www.codewars.com/kata/57f609022f4d534f05000024/train/python

def stray(arr):
    num1 = arr[0]
    num2 = None
    num1_len = 1
    num2_len = 0
    i = 1
    while i < len(arr):
        if arr[i] == num1:
            num1_len += 1
        else:
            num2_len += 1
            if num2 == None:
                num2 = arr[i]
        i += 1
    if num1_len > num2_len:
        return num2
    return num1

if __name__ == "__main__":
    print(stray([1, 1, 2]))
