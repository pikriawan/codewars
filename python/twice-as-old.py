# Tanggal: 11 April 2026
# Link: https://www.codewars.com/kata/5b853229cfde412a470000d0/train/python

def twice_as_old(dad_years_old, son_years_old):
    return abs(son_years_old - (dad_years_old - son_years_old))

if __name__ == '__main__':
    print(twice_as_old(36, 7))
    print(twice_as_old(55, 30))
    print(twice_as_old(42, 21))
