#!/usr/bin/env python
s = input()
p = input()
if (
    s == p
    or (s[1:] == p and s[0].isdigit())
    or (s[1:] == p.swapcase() and s[0].isdigit())
    or (s[:-1] == p and s[-1].isdigit())
    or (s[:-1] == p.swapcase() and s[-1].isdigit())
    or s == p.swapcase()
):
    print("Yes")
else:
    print("No")
