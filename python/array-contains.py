def array_contains(array, value):
    for i in array:
        if i == value:
            return True
    return False

if __name__ == "__main__":
    print(array_contains([66, 101], 66))
    print(array_contains([78, 117, 110, 99, 104, 117, 107, 115], 8))
