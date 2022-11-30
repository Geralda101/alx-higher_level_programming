#!/usr/bin/python3
for i in reversed(range(97, 123, 2)):
    print("{}{}".format(chr(i + 1), chr(i - 32)), end="")
