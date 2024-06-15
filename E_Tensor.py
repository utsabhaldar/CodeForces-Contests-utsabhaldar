def solve():
    import sys
    input = sys.stdin.read
    data = input().split()
    
    index = 0
    t = int(data[index])
    index += 1
    results = []
    
    def ask(i, j):
        print(f"? {i} {j}", flush=True)
        return input().strip() == "YES"
    
    for _ in range(t):
        n = int(data[index])
        index += 1
        
        reachable = [[False] * n for _ in range(n)]
        for i in range(n):
            for j in range(i + 1, n):
                reachable[i][j] = ask(i + 1, j + 1)
        
        color = [0] * n  # Initialize all vertices with color 0 (e.g., black)
        for i in range(n):
            for j in range(i + 1, n):
                if reachable[i][j]:
                    color[j] = color[i]
                else:
                    color[j] = 1 - color[i]
        
        results.append('! ' + ' '.join(map(str, color)))
    
    sys.stdout.write("\n".join(results) + "\n")
    sys.stdout.flush()

if __name__ == "__main__":
    solve()
