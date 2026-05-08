# Tanggal: 8 Mei 2026
# Link: https://www.codewars.com/kata/577bd026df78c19bca0002c0/train/python

def correct(s):
    result = ""
    for i in s:
        if i == "5":
            result += "S"
        elif i == "0":
            result += "O"
        elif i == "1":
            result += "I"
        else:
            result += i
    return result

if __name__ == "__main__":
    print(correct("L0ND0N"))
