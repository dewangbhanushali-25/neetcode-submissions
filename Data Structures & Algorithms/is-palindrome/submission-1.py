class Solution:
    def isPalindrome(self, s: str) -> bool:
        left = 0 
        right = len(s)-1

        while left < right :
            # skip non alpha numeric characters
            while left < right and not s[left].isalnum():
                left += 1

            while left < right and not s[right].isalnum():
                right -= 1

            #compare characters ignoring case
            if s[left].lower() != s[right].lower():
                return False

            # move towards the center

            left += 1
            right -= 1
        return True            


    