def find_an_after_m_seconds(n, m):
    if m == 0:
        return n
    if n == 0:
        return (1 << m) - 1
    
    # Simulate to find the pattern or directly compute for smaller cases
    if m <= 60:  # Simulate up to 60 steps
        a = [i for i in range(n+2)]
        for _ in range(m):
            new_a = a[:]
            new_a[0] = a[0] | a[1]
            for i in range(1, n+1):
                new_a[i] = a[i-1] | a[i] | a[i+1]
            a = new_a
        return a[n]
    else:
        # If m > 60, convergence happens and we need to determine based on the convergence state
        if n < 60:
            a = [i for i in range(n+2)]
            for _ in range(60):
                new_a = a[:]
                new_a[0] = a[0] | a[1]
                for i in range(1, n+1):
                    new_a[i] = a[i-1] | a[i] | a[i+1]
                a = new_a
            return a[n]
        else:
            return (1 << (n + 1).bit_length()) - 1

def main():
    import sys
    input = sys.stdin.read
    data = input().split()
    
    t = int(data[0])
    index = 1
    results = []
    
    for _ in range(t):
        n = int(data[index])
        m = int(data[index + 1])
        index += 2
        result = find_an_after_m_seconds(n, m)
        results.append(result)
    
    for res in results:
        print(res)

if __name__ == "__main__":
    main()
