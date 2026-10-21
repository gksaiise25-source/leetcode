class Solution:
    def reverseWords(self, s: str) -> str:
        a = s.split(" ")
        for i in range(len(a)):
            word = list(a[i])
            n = len(word)
            for j in range(n//2):
                word[j],word[n-j-1] = word[n-j-1],word[j] 
            a[i] = "".join(word)
        return " ".join(a)
        
