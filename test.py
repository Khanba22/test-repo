t = int(input())
for _ in range(t):
    year = int(input())
    rootYear = year ** 0.5

    rootYear = int(rootYear)
    found = False

    for a in range(rootYear + 1):
        b = rootYear - a
        print(a, b)
        found = True
        break 

    if not found:
        print(-1)
