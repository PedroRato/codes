# -*- coding: utf-8 -*-
a,b,c = input().split(" ")
a,b,c = [float(a), float(b), float(c)]

if( ((abs(b-c)) < a < (b+c)) or ((abs(a-c)) < b < (a+c))  or ((abs(b-a)) < c < (b+a))):
	print("Perimetro =","{:0.1f}".format(a+b+c) )
else:
	print("Area =","{:0.1f}".format(((a+b)*c)/2) )
