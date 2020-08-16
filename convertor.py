# -*- coding: utf-8 -*-
#
#Criado por relue271
#convertor de base decimal para binario, hexadecimal e octal
#
#entrada: 123
#saida:  B:1111011
#        H: 7B
#        O: 173
#
decimal = input("Digite o numero: ")
print("o numero digitado é "+str(decimal))

#binario
aux = decimal
binario = ''
while (aux > 0):
    resto = aux % 2
    aux = aux / 2
    binario += str(resto)
print('B: '),
for k in range((len(binario)-1),-1,-1):
    print(binario[k]),
print





#hexadecimal
aux = decimal
hexadecimal = ''
while (aux > 0):
    resto = aux % 16
    aux = aux /16
    if resto == 10:
        hexadecimal += 'A'
    if resto == 11:
        hexadecimal += 'B'
    if resto == 12:
        hexadecimal += 'C'
    if resto == 13:
        hexadecimal += 'D'
    if resto == 14:
        hexadecimal += 'E'
    if resto == 15:
        hexadecimal += 'F'
    if resto <= 9 and resto >= 0:
        hexadecimal += str(resto)
print('H: '),
for k in range(len(hexadecimal)-1, -1, -1):
    print(hexadecimal[k]),
print





#octal
aux = decimal
octal = ''
while(aux > 0):
    resto = aux % 8
    aux = aux / 8
    octal += str(resto)
print('O: '),
for k in range(len(octal)-1, -1, -1):
    print(octal[k]),
print
