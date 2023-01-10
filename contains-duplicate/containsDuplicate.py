class Solution:
    def containsDuplicate(self, nums) -> bool:
        # Hash table
        map = {}
        
        # iterate over nums
        for i in nums:
            # iterate over map to check nums exist
            if i in map:
                return True
            # if number doesn't exits add to map
            map[i] = i
            print(map)

        return False

print(Solution().containsDuplicate([3,3]))

