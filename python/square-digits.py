# Tanggal: 30 April 2026
# Link: https://www.codewars.com/kata/546e2562b03326a88e000020/train/python

def square_digits(num):
    result_str = ""
    for digit in str(num):
        d = int(digit)
        result_str += str(d * d)
    return int(result_str)

if __name__ == "__main__":
    print(square_digits(9119))
