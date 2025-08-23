arr = [1,2,2,2,1,3]

m = dict()

for n in arr:
    if n in m:
        m[n] += 1
    else:
        m[n] = 1

s = set()

for key in m:
    s.add(m[key])

print(len(m)==len(s))