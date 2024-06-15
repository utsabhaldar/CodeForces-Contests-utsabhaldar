def is_possible(grid):
    n = len(grid)
    m = len(grid[0])

    def dfs(x, y, color):
        if x < 0 or x >= n or y < 0 or y >= m or grid[x][y] != color:
            return
        grid[x][y] = "X"  # Mark as visited
        dfs(x + 1, y, color)
        dfs(x - 1, y, color)
        dfs(x, y + 1, color)
        dfs(x, y - 1, color)

    black_found = False
    white_found = False
    for i in range(n):
        for j in range(m):
            if grid[i][j] == "B":
                if black_found:
                    return "NO"
                dfs(i, j, "B")
                black_found = True
            elif grid[i][j] == "W":
                if white_found:
                    return "NO"
                dfs(i, j, "W")
                white_found = True

    return "YES"

t = int(input())
for _ in range(t):
    n, m = map(int, input().split())
    grid = [list(input()) for _ in range(n)]
    print(is_possible(grid))
