name = "naman"
def is_palindrome(s):
    start,end=0,len(s)-1
    while start<end:
        if(s[start]==s[end]):
            start+=1
            end-=1
        else:
            return 0
    return 1
# print(is_palindrome(name))

def ris_palilndrome(s,start,end):
    if start>end:
        return 1
    if s[start]!=s[end]:
        return 0
    return ris_palilndrome(s,start+1,end-1)

# print(ris_palilndrome(name,0,len(name)-1))

def iterate(s):
    for x in s:
        print(x, end=" ")
# iterate(name)    

def riterate(s,start):
    if start>len(s)-1:
        return
    print(s[start],end=" ")
    riterate(s,start+1)
# riterate(name,0)    

"""Count Vowel"""

def count_vowel(s):
    vowel="aeiouAEIOU"
    result = 0
    for c in s:
        if(c in vowel):
            result+=1
    return result
print(count_vowel("Abhinay"))

def rcount_vowel(s,start,result):
    vowel="aeiouAEIOU"
    
    rcount_vowel(s,start+1,s[start] in vowel if result=1 else result)

