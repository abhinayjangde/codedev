'''
Given a positive integer num, write a program that returns True if num is a perfect
square else return False. Do not use built-in functions like sqrt. Also, talk about the time
complexity of your code.
Test Cases:
Input: 16
Output: True
Input: 14
Output: False
'''
import math

def check_perfect_number(n):
    if int(math.sqrt(n)) * int(math.sqrt(n))== n:
        return True
    return False

print(check_perfect_number(64))
