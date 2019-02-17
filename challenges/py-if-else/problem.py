#!/usr/bin/python3

N = int(input())

is_even = N % 2 == 0

weird_msg = 'Weird'
not_weird_msg = 'Not Weird'

if not is_even:
    print(weird_msg)
else:
    if N >= 2 and N <= 5:
        print(not_weird_msg)
    elif N >= 6 and N <= 20:
        print(weird_msg)
    else:
        print(not_weird_msg)
