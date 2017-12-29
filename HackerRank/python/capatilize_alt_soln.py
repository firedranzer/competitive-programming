import string
def capitalize(string):
    input = []
    for word in string.split(' '):
        if word:
            input.append(word[0].upper() + word[1:].lower())
        else :
            input.append(' ')
    return ' '.join(input)