def stringReverse(str):
    if not str:
        return str
    else:
        print(str[1:])
        print(str[0])
        return stringReverse(str[1:]) + str[0]

print(stringReverse('Algoritmos'))