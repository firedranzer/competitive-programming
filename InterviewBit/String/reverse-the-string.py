# https://www.interviewbit.com/problems/reverse-the-string/

class Solution:
    # @param A : string
    # @return string
    def reverseWords(self, A):
        A = A.split()
        s = []
        for word in A:
            s.append(word)
        s.reverse()
        return " ".join(s)