# Tanggal: 27 April 2026
# Link: https://www.codewars.com/kata/57a5c31ce298a7e6b7000334/train/python

def bin_to_decimal(binary):
    result = 0
    power = 0
    for digit in reversed(binary):
        if digit != "0":
            result += pow(2, power)
        power = power + 1
    return result

if __name__ == "__main__":
    decimal = bin_to_decimal(input("Enter binary: "))
    print(f"Result: {decimal}")
