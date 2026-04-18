1. Bitwise operators in Python
Python integers are stored in binary, and bitwise operators act on those bits directly.

Key operators you will use:

& (AND): bit is 1 only if both bits are 1
| (OR): bit is 1 if at least one bit is 1
^ (XOR): bit is 1 if bits are different
~ (NOT): flips all bits (in Python gives negative numbers because of infinite-length representation)

Example (in conceptual 8‑bit form):

6 is 00000110
5 is 00000101

Then:

6 & 5 → 00000100 → 4
6 | 5 → 00000111 → 7
6 ^ 5 → 00000011 → 3

Quick practice for you
Without running Python, try to reason this out:

What is 10 & 12 in decimal?

Hint:

10 in binary = 1010
12 in binary = 1100
Do a bitwise AND and then convert back to decimal.

Write your steps in words (how you combine bits), not just the final number.