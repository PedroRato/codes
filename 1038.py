# -*- coding: utf-8 -*-
import math

a,b = input().split()
a,b = [float(a), float(b)]

if(a == 1):
	print("Total: R$", "{:0.2f}".format(4*b))
elif(a == 2):
        print("Total: R$", "{:0.2f}".format(4.5*b))
elif(a == 3):
        print("Total: R$", "{:0.2f}".format(5*b))
elif(a == 4):
        print("Total: R$", "{:0.2f}".format(2*b))
elif(a == 5):
        print("Total: R$", "{:0.2f}".format(1.5*b))
