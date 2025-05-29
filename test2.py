t = int(input())
for _ in range(t):
    n, k = map(int, input().split())
    s = input()
    zCount = s.count('0')
    oCount = n - zCount
    totalPairs = n // 2
    bad = totalPairs - k
    if bad > min(zCount, oCount):
        print("NO")
        continue
    zR = zCount - bad
    oR = oCount - bad
    if oR % 2 == 0 and zR % 2 == 0:
        print("YES")
    else:
        print("NO")