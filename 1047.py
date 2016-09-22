# -*- coding: utf-8 -*-

hi, mi, hf, mf = input().split(" ")
hi, mi, hf, mf = [int (hi), int(mi), int(hf), int(mf)]

hi *= 60
hf *= 60

hi += mi
hf += mf

if(hi >= hf):
    hi = 1440 - hi
    print("O JOGO DUROU %i HORA(S) E %i MINUTO(S)" % (int((hf+hi)/60), int((hf+hi)%60)) )
else:
    print("O JOGO DUROU %i HORA(S) E %i MINUTO(S)" % (int((hf-hi)/60), int((hf-hi)%60)) )
