import math

def travel_time(n, k, q, a, b, queries):
    res = []
    for d in queries:
        if d <= a[0]:
            res.append(b[0])
            continue
        if d >= a[-1]:
            res.append(b[-1] + (d - a[-1]))
            continue
        l, r = 0, k - 1
        while l < r:
            mid = (l + r) // 2
            if a[mid] >= d:
                r = mid
            else:
                l = mid + 1
        res.append(b[l-1] + (d - a[l-1]))
    return res

t = int(input())
for _ in range(t):
    n, k, q = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    queries = [int(input()) for _ in range(q)]
    result = travel_time(n, k, q, a, b, queries)
    print(" ".join(map(str, result)))
