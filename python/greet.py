# Tanggal: 14 April 2026
# Link: https://www.codewars.com/kata/577ff15ad648a14b780000e7/train/python

def greet(language):
    greeting = {
        "english": "Welcome",
        "czech": "Vitejte",
        "danish": "Velkomst",
        "dutch": "Welkom",
        "estonian": "Tere tulemast",
        "finnish": "Tervetuloa",
        "flemish": "Welgekomen",
        "french": "Bienvenue",
        "german": "Willkommen",
        "irish": "Failte",
        "italian": "Benvenuto",
        "latvian": "Gaidits",
        "lithuanian": "Laukiamas",
        "polish": "Witamy",
        "spanish": "Bienvenido",
        "swedish": "Valkommen",
        "welsh": "Croeso"
    }

    try:
        result = greeting[language]
        return result
    except:
        return greeting["english"]

if __name__ == "__main__":
    print(greet("english"))
    print(greet("dutch"))
    print(greet("IP_ADDRESS_INVALID"))
    print(greet(""))
    print(greet(2))
