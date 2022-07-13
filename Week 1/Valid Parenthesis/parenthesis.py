"""
--Valid Parenthesis--
Runtime: 42 ms, faster than 67.78% of Python3 online submissions for Valid Parentheses.
Memory Usage: 13.9 MB, less than 70.03% of Python3 online submissions for Valid Parentheses.

--TO BE DONE IN A LANGUAGE WITH FORMAL STACK SUPPORT.--
"""
class Solution:
    def isValid(self, s: str) -> bool:
        stk = []
        
        parenthesis = {
            '(':')',
            '{':'}',
            '[':']'
        }
        
        for i in s:
            if i in parenthesis.keys():
                stk.append(parenthesis[i])
            else:
                if len(stk) == 0:
                    return False
                elif (i in parenthesis.values()) and (stk[-1] == i):
                    stk.pop()
                else:
                    return False
        return len(stk) == 0