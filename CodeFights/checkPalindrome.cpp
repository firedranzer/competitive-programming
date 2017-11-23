def checkPalindrome(inputString):
    s = inputString[::-1]
    if s == inputString:
        return True
    return False
