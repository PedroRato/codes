# -*- coding: utf-8 -*-

a, b, c, d = input().split()
a, b, c, d = [float(a), float(b), float(c), float(d)]

media = ((a*2 + b*3 + c*4 + d*1)/10)

print("Media:", "{:0.1f}".format(media))

if(media >= 7):
	print("Aluno aprovado.")
elif(media < 5):
	print("Aluno reprovado.")
else:
	print("Aluno em exame.")
	aux = float(input())
	print("Nota do exame:", "{:0.1f}".format(aux))
	if( (media+aux)/2 >=5):
		print("Aluno aprovado.")			
	else:
		print("Aluno reprovado.")
	print("Media final:", "{:0.1f}".format((media+aux)/2))
