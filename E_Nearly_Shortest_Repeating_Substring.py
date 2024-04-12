def shortest_k_length(s):
    freq = {}
    for char in s:
        if char in freq:
            freq[char] += 1
        else:
            freq[char] = 1

    # If there is a character with frequency greater than n/2
    if max(freq.values()) > len(s) // 2:
        return 1

    # If there are at least two different characters with frequency greater than 1
    if len(freq) > 1 and max(freq.values()) > 1:
        return max(freq.values())

    # If there is only one character with frequency greater than 1
    if len(freq) == 1 and max(freq.values()) > 1:
        return max(freq.values())

    # If none of the above conditions are satisfied
    return len(s) - 1

t = int(input())

for _ in range(t):
    n = int(input())
    s = input()

    print(shortest_k_length(s))