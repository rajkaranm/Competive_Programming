class Solution:
    def longestCommonPrefix(self, strs) -> str:
        result = ""

        for i in range(self.smallest(strs)):
            current = strs[0][i]
            for j in range(1, len(strs)):
                if (strs[j][i] != current):
                    return result
            result = result + current
        return result


    def smallest(self, strs) -> int:
        temp = None
        for i in range(len(strs) - 1):
            if len(strs[i]) >= len(strs[i+1]):
                temp = strs[i + 1]
        return len(temp)


problem = Solution()
print(problem.longestCommonPrefix(["hillo", "hiler", "hilr"]))