from collections import Counter

nums = [1, 2, 3, 4, 1, 2, 2, 3, 42, 3, 4, 2, 3, 3]
def count_most_repeated(nums):
    hash = {}
    for item in nums:
        if item in hash:
            hash[item] += 1
        else:
            hash[item] = 1
    
    ans, max_count = 0, 0
    for key, value in hash.items():
        if value > max_count:
            max_count = value
            ans = key
    return [ans, max_count]

def count_most_repeated2(nums):
    count = Counter(nums)
    most_common = count.most_common(1)[0]
    return [most_common[0], most_common[1]]

print(count_most_repeated(nums))
print(count_most_repeated2(nums))
