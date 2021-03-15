// Criado por relue271
// Convertor de bases

package main

import (
	"fmt"
	"strconv"
)

func main() {
	fmt.Printf("-")
	convertor()
	fmt.Printf("hello")
}

func convertor() {

	var decimal int
	fmt.Print("Decimal: ")
	fmt.Scanf("%d", &decimal)
	//fmt.Print(decimal)

  
  
  
  
  
	//converte o decimal para binario
	var aux int
	var resto int
	aux = decimal
	resto = decimal

	var binario string
	binario = ""
	for {
		resto = aux % 2
		aux = aux / 2
		binario = strconv.Itoa(resto) + binario //conversao int para char
		if aux <= 0 {
			break
		}
	}
	fmt.Print("B: ")
	fmt.Println(binario)

  
  
  
  
  
	//converte o decimal para hexadecimal
	aux = decimal
	resto = decimal
	var hexa string
	hexa = ""
	for {
		resto = aux % 16
		aux = aux / 16
		switch resto {
		case 10:
			hexa = "A" + hexa
		case 11:
			hexa = "B" + hexa
		case 12:
			hexa = "C" + hexa
		case 13:
			hexa = "D" + hexa
		case 14:
			hexa = "E" + hexa
		case 15:
			hexa = "F" + hexa
		default:
			hexa = strconv.Itoa(resto) + hexa //conversao int para char
		}
		if aux <= 0 {
			break
		}
	}
	fmt.Print("H: ")
	fmt.Println(hexa)

  
  
  
  
  
	//converte decimal para octal
	aux = decimal
	resto = decimal
	var octal string
	octal = ""
	for {
		resto = aux % 8
		aux = aux / 8

		octal = strconv.Itoa(resto) + octal
		if aux <= 0 {
			break
		}
	}
	fmt.Print("O: ")
	fmt.Println(octal)

	return
}
