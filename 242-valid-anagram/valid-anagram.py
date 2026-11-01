class Solution:
    def isAnagram(self, s: str, t: str) -> bool:

        n1 = len(s)
        n2 = len(t)

        if n1 != n2:
            return False

        freq = {}
        for i in s:
            freq[i] = freq.get(i,0) + 1

        for ch in t:
            if ch not in freq or freq[ch] == 0:
                return False

            freq[ch] -= 1

        return True
        