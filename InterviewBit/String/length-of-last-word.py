#https://www.interviewbit.com/problems/length-of-last-word/

class Solution:
    # @param s, a string
    # @return an integer
    def lengthOfLastWord(self, s):
        s = s.strip()       # Remove the spaces at the beginning and end
 
        length = 0
        for letter in s:
            if letter == " ":   length = 0   # Waiting for the next word
            else:               length += 1  # Inside one word
 
        return length