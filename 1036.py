# -*- coding: utf-8 -*-
import math

a, b, c = input().split()
a, b, c = [float(a), float(b), float(c)]

if( b**2 -4*a*c < 0 or a == 0):
	print("Impossivel calcular")
else:
	print("R1 =", (round(((-b + math.sqrt(b**2 -4*a*c))/(2*a)), 5) ) )
	print("R2 =", (round(((-b - math.sqrt(b**2 -4*a*c))/(2*a)), 5) ) )