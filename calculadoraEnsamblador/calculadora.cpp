#include <iostream>

int main() {
	int seleccion = 0;
	short num1, num2;
	short result;

	while (seleccion < 5) {
		std::cout << "Seleccione una opcion:\n";
		std::cout << "1. Suma\n";
		std::cout << "2. Resta\n";
		std::cout << "3. Multiplicacion\n";
		std::cout << "4. Division\n";
		std::cout << "5. Salir\n";
		std::cout << "Seleccione una opcion: ";
		std::cin >> seleccion;

		switch (seleccion) {
		case 1:
			std::cout << "SUMA\n";
			std::cout << "Numero 1: ";
			std::cin >> num1;
			std::cout << "Numero 2: ";
			std::cin >> num2;

			_asm {
				mov ax, num1;
				mov bx, num2;
				add ax, bx;
				mov result, ax;
			}

			printf("Resultado: %d \n", result);

			break;
		case 2:
			std::cout << "RESTA\n";
			std::cout << "Numero 1: ";
			std::cin >> num1;
			std::cout << "Numero 2: ";
			std::cin >> num2;

			_asm {
				mov ax, num1;
				mov bx, num2;
				sub ax, bx;
				mov result, ax;
			}

			printf("Resultado: %d \n", result);

			break;
		case 3:
			std::cout << "MULTIPLICACION\n";
			std::cout << "Numero 1: ";
			std::cin >> num1;
			std::cout << "Numero 2: ";
			std::cin >> num2;

			_asm {
				mov ax, num1;
				mov bx, num2;
				mul bx;
				mov result, ax;
			}

			printf("Resultado: %d \n", result);

			break;
		case 4:
			std::cout << "DIVISION\n";
			std::cout << "Numero 1: ";
			std::cin >> num1;
			std::cout << "Numero 2: ";
			std::cin >> num2;

			if (num2 == 0) {
				std::cout << "La division entre 0 no esta permitida\n";
			}
			else {
				_asm {
					xor dx, dx;
					mov ax, num1;
					mov bx, num2;
					div bx;
					mov result, ax;
				}

				printf("Resultado: %d \n", result);
			}

			

			break;
		case 5:
			break;
		}
		
	}
}