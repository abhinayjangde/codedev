from stack import Stack

s="[{()}]"

def parenthesis_maching(string=""):
    stc=Stack()
    for c in s:
        if c == '(' or c == '{' or c == '[':
            stc.push(c)
        elif c == ')' or c == '}' or c == ']':
            if not stc.is_empty():
                stc.pop()
            else:
                return False
    return stc.is_empty()

print(parenthesis_maching("(]"))
