#!/usr/bin/python
import random
a=random.randint(1,100)
b = input("please enter number ")
if a > b:
    print("number less than generated number")
else:
    print("number is greter than random generated number")

print("random is = " + str(a))
