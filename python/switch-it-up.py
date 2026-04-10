# Tanggal: 10 April 2026
# Link: https://www.codewars.com/kata/5808dcb8f0ed42ae34000031/train/python

def switch_it_up(number):
    match number:
        case 0:
            return "Zero"
        case 1:
            return "One"
        case 2:
            return "Two"
        case 3:
            return "Three"
        case 4:
            return "Four"
        case 5:
            return "Five"
        case 6:
            return "Six"
        case 7:
            return "Seven"
        case 8:
            return "Eight"
        case 9:
            return "Nine"

if __name__ == "__main__":
    print(switch_it_up(0))
    print(switch_it_up(1))
    print(switch_it_up(2))
    print(switch_it_up(3))
    print(switch_it_up(4))
    print(switch_it_up(5))
    print(switch_it_up(6))
    print(switch_it_up(7))
    print(switch_it_up(8))
    print(switch_it_up(9))
