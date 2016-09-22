# -*- coding: utf-8 -*-

a,b = input().split(" ")
a,b = [int(a), int(b)]

b *= 60
a *= 60
if(a >= b):
    a = 1440 - a
    print("O JOGO DUROU %i HORA(S)" % int((b+a)/60))
else:
    print("O JOGO DUROU %i HORA(S)" % int((b-a)/60))
