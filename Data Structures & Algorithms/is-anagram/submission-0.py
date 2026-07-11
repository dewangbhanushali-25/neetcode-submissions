class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        
        if len(s)!=len(t):
            return False

        dict = {}

        for ch in s:
            if ch in dict:
                dict[ch]+=1
            else:
                dict[ch] = 1

                
        for ch in t :
            if ch not in dict:
                return False 
            dict[ch]-=1

            if dict[ch] <0 :
                return False

# 

        for count in dict.values():
            if count!=0 :
                return False
        return True       





        