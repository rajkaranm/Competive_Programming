class solution:
    def pairOfNumSum(self, arr, sum):
        n = len(arr)
        for i in range(n):
            for j in range(n):
                if arr[i] + arr[j] == sum and i != j:
                    return [arr[i], arr[j]]

p = solution()
print(p.pairOfNumSum([3, 1, 2, 5], 8))
