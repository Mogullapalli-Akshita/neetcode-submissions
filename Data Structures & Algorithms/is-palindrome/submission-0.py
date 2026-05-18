class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = s.replace(" ","").lower()
        s = "".join(char for char in s if char.isalnum())
        return s==s[::-1]