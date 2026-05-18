class Solution:
    def isValid(self, s: str) -> bool:
        stack = []

        for j in s:
            if j in "([{":
                stack.append(j)
                # print(stack)
            else:
                if not stack:
                    return False
                top = stack[-1]
                if j == ")" and top != "(":
                    return False
                if j == "]" and top != "[":
                    return False
                if j == "}" and top != "{":
                    return False
                else:
                    elem = stack.pop()
        return len(stack) == 0
        