Program convertor ;
// Programa que converte um numero decimal em seu binario, hexadecimal e octal respectivo

var 
	decimal : integer;
	// binario
	quociente, i, resto : integer;
	binario : string;
	strresto : string;
	// hexadecimal
	hexa : string;
	// octal
	octal : string;
	

Begin
	// receber um numero decimal
	write('Digite um numero decimal: ');
	readln(decimal);
	writeln();
	
  
	quociente := decimal;
	binario := '';
  // binario
	repeat
		resto := quociente MOD 2;
		quociente := trunc(quociente / 2);
		str(resto:1,strresto);
		binario := concat(strresto,binario);
	until (quociente = 0);
	writeln('binario: ', binario);
	writeln('---');



  // hexadecimal
 	quociente := decimal;
	hexa := '';
	repeat
		resto := quociente MOD 16;
		quociente := trunc(quociente / 16);
		case resto of
			10 : begin
				hexa := concat('A', hexa);
			end;
			11 : begin
				hexa := concat('B', hexa);
			end;
			12 : begin
				hexa := concat('C', hexa);
			end;
			13 : begin
				hexa := concat('D', hexa);
			end;
			14 : begin
				hexa := concat('E', hexa);
			end;
			15 : begin
				hexa := concat('F', hexa);
			end;
			else
				str(resto:1,strresto);
				hexa := concat(strresto,hexa);
		end;
	until (quociente = 0);
	writeln('hexa: ', hexa);
	writeln('---');		



	// octal
  quociente := decimal;
	octal := '';
	repeat
		resto := quociente MOD 8;
		quociente := trunc(quociente / 8);
		str(resto:1,strresto);
		octal := concat(strresto,octal);
	until (quociente = 0);
	writeln('octal: ', octal);
		
End.
