def solution(arr, target):
    for i in range(len(arr)):
        for j in range(len(arr)):
            if (arr[i] + arr[j] == target and i != j):
                return [i, j]
            

print(solution([2,3,4,5], 6))
