def minCost(s):
    cost = 0
    count0 = 0
    count1 = 0
    
    for char in s:
        if char == '0':
            count0 += 1
        else:
            count1 += 1
        
        if count0 == count1:
            cost += count0
            count0 = 0
            count1 = 0
    
    cost += min(count0, count1)
    return cost
