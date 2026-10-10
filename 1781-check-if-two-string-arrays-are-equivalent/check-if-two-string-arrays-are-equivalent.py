class Solution:
    def arrayStringsAreEqual(self, word1: list[str], word2: list[str]) -> bool:
        n1 = len(word1)
        n2 = len(word2)
        s1 = ""
        s2 = ""
        for i in range(n1):
            s1=s1+word1[i]
        for i in range(n2):
            s2=s2+word2[i]
        if s1==s2:
            return True
        else:
            return False
