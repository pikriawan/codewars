# Tanggal: 12 April 2026
# Link: https://www.codewars.com/kata/5875b200d520904a04000003/train/python

def enough_space(cap, on, wait):
    total = on + wait

    if total > cap:
        return total - cap

    return 0

if __name__ == "__main__":
    print(enough_space(10, 5, 5))
    print(enough_space(100, 60, 50))
