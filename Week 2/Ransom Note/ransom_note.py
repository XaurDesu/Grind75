"""
--Ransom Note--
Runtime: 57 ms, faster than 89.14% of Python3 online submissions for Ransom Note.
Memory Usage: 14.4 MB, less than 10.79% of Python3 online submissions for Ransom Note.
"""
class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        ransom_list = [i for i in ransomNote]
        magazine_list = [i for i in magazine]
        
        for i in ransom_list:
            if i in magazine_list:
                magazine_list.remove(i)
            else:
                return False
        return True