#!/usr/bin/python3

lowest_3 = 100
highest_3 = 999

highest_palindrome = 0
args = []

for i in range(lowest_3, highest_3 + 1):
    for j in range(lowest_3, highest_3 + 1):
        toStr = str(i * j)
        revStr = "".join(reversed([c for c in toStr]))
        if toStr == revStr and int(toStr) > highest_palindrome:
            highest_palindrome = int(toStr)
            args = [i, j]

print(highest_palindrome, args)
