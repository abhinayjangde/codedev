

s = "hello"
def reverseString(s):
    st = []
    for i in s: # O(n)
        st.append(i)
    result = ""
    while st:
        result += st.pop()
    return result
print(reverseString(s))