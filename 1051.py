# -*- coding: utf-8 -*-

salary = float(input())

if(salary > 2000):
	if(salary <= 3000.0 ):
		salary = (salary - 2000.0)*0.08
	elif( salary <= 4500.0):
		salary = (salary - 3000.0)*0.18 + (1000*0.08)
	else:
		salary = (salary - 4500)*0.28 + (1500*0.18) + (1000*0.08)

	print("R$ {:0.2f}".format(salary))
else:
	print("Isento")
