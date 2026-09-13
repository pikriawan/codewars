def is_anagram(test, original):
    return "".join(sorted(test.lower())) == "".join(sorted(original.lower()))

if __name__ == "__main__":
    print(is_anagram("Foefet", "toffee"))
