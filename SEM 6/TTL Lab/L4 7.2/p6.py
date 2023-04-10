#SET program that finds all pairs of elements in a list whose sum is equal to a given val
nums=[1,5,3,5,9,12,8,2,4,7,8,9,10,11,12,13]
nums_set = set(nums)
pairs = []
val= 12
for n in nums_set:
    c = val - n
    if c in nums_set:
        pairs.append({n, c})
print(pairs)
