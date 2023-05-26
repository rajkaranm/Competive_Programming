def minion_game(string):
    # your code goes here
    kevin = 0
    stuart = 0
    vowel = "AEIOU"
    length = len(string)

    for i in range(length):
        if string[i] in vowel:
            kevin += length - i
            print("kevin,",i,kevin)

        if string[i] not in vowel:
            stuart += length - i


    if kevin > stuart:
        print("Kevin", kevin)
    elif kevin < stuart:
        print("Stuart", stuart)
    else:
        print("Draw")

if __name__ == '__main__':
    s = "BANANA"
    minion_game(s)
