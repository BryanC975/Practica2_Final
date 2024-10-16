//Practica2.c
#include <stdio.h>
#include <stdlib.h>


//DECLARIONES DE FUNCIONES
int menu(); // declaraci�n de la funci�n "menu"
int desplazar(int num, int Ndespazados); // declaraci�n de la funci�n "desplazar"
int Parimpar(int n); // declaraci�n de la funci�n "Parimpar"
void operacionesLogicasBits(); // declaraci�n de la funci�n "operacionesLogicasBits"
int ponerAceroBit(int n, int nPostBit); // declaraci�n de la funci�n "ponerAceroBit"
int obtenerValorBit(int n, int x); // declaraci�n de la funci�n "obtenerValorBit"
long factorial(long g); // declaraci�n de la funci�n "factorial"
int numeroBits(int n); // declaraci�n de la funci�n "numeroBits"
int cambiarBits(int, int, int); // declaraci�n de la funci�n "cambiarBits"
void intercambiar(double *, double *); // declaraci�n de la funci�n "intercambiar"

int main()
{
	// DEFINICIONES DE VARIABLES
	int opcion; //opcion elegida para el menu
	int a, b, c, r; // variables de tipo int que se va a usar en las diferentes funciones
	double p, i; // variables que se van a usar para la funci�n con los punteros
	long  yl, xl;
	printf("PRACTICA 2\n"); // Texto que va a parecer en pantalla
	printf("-------------\n");
	opcion = menu();  //variable que va a llamar a la funci�n menu
	while (opcion != 10) //sentencia repetitiva
	{
		switch (opcion) //sentencia condicional que utiliza la variable opcion para las diferentes opciones
		{
		case 1: //Primera opcion al insertar el numero 1
			printf("Ejercicio 1: desplazar\n"); //Proyectamos por pantalla
			printf("Introduzca un numero: "); //Proyectamos por pantalla
			scanf_s("%d", &a); //Pedimos al usuario que inserte un numero y lo guardamos en la variable
			printf("Posiciones a desplazar a la derecha:: "); //Proyectamos por pantalla
			scanf_s("%d", &b); //Pedimos al usuario que inserte un numero y lo guardamos en la variable
			r = desplazar(a, b); //Llamamos a la funci�n desplazar y guardamos en r el resultado que devuelva la funcion desplazar
			printf("El numero desplazado es %d: \n", r); //Proyectamos por pantalla el resultado obtenido
			break; //Sale del bucle al acabar el programa

		case 2:
			printf("Ejercicio 2: par o impar\n");//Proyectamos por pantalla
			printf("Introduzca un n�mero:: ");//Proyectamos por pantalla
			scanf_s("%d", &a);//Pedimos al usuario que inserte un numero y lo guardamos en la variable
			r = Parimpar(a);//Llamamos a la funci�n Parimpar y guardamos en r el resultado que devuelva la funcion Parimpar
			if (r == 0)
			{
				printf("El numero %d es PAR \n", a);
			}
			else
				printf("El numero %d es IMPAR \n ", a);
			break;//Sale del bucle al acabar el programa

		case 3:
			printf("Ejercicio 3: operaciones logicas y a nivel de bits\n");//Proyectamos por pantalla
			operacionesLogicasBits();//Llamamos a la funci�n operacionesLogicasBits
			break;//Sale del bucle al acabar el programa

		case 4:
			printf("Ejercicio 4: poner a cero un bit\n");//Proyectamos por pantalla
			printf("Introduzca un numero: ");//Proyectamos por pantalla
			scanf_s("%d", &a);//Pedimos al usuario que inserte un numero y lo guardamos en la variable
			printf("Posici�n del bit a poner a cero: ");//Proyectamos por pantalla
			scanf_s("%d", &b);//Pedimos al usuario que inserte un numero y lo guardamos en la variable
			r = ponerAceroBit(a, b);//Llamamos a la funci�n ponerAceroBit y guardamos en r el resultado que devuelva la funcion ponerAceroBit
			printf("El resultado es %d", r);//Proyectamos por pantalla el resultado
			break;//Sale del bucle al acabar el programa

		case 5:
			printf("Ejercicio 5: obtener valor de un bit\n");//Proyectamos por pantalla
			printf("Introduzca un numero: ");//Proyectamos por pantalla
			scanf_s("%d", &a);//Pedimos al usuario que inserte un numero y lo guardamos en la variable
			printf("Posicion de bit: ");//Proyectamos por pantalla
			scanf_s("%d", &b);//Pedimos al usuario que inserte un numero y lo guardamos en la variable
			while (b < 0)
			{
				printf("Posicion de bit: ");
				scanf_s("%d", &b);
			}
			r = obtenerValorBit(a, b);
			printf("El valor del bit: %d", r);
			break;//Sale del bucle al acabar el programa

		case 6:
			printf("Ejercicio 6: factorial\n");//Proyectamos por pantalla
			do
			{
				printf("Introduzca un numero entero positivo: ");//Proyectamos por pantalla
				scanf_s("%d", &yl);//Pedimos al usuario que inserte un numero y lo guardamos en la variable
			} while (yl < 0);
				xl = factorial(yl);
			if (xl == -1)
			{
				printf("No es posible calcular el factorial");//Proyectamos por pantalla
			}
			else
			{
				printf("El numero factorial de %d es %d:  ", yl, xl);
			}
			break;//Sale del bucle al acabar el programa

		case 7:
			printf("Ejercicio 7: numero de bits\n");//Proyectamos por pantalla
			printf("Introduzca un numero entero positivo: ");//Proyectamos por pantalla
			scanf_s("%d", &a);//Pedimos al usuario que inserte un numero y lo guardamos en la variable
			while (a < 0)
			{
				printf("Introduzca un numero entero positivo: ");
				scanf_s("%d", &a);
			}
			r = numeroBits(a);//Llamamos a la funci�n numeroBits y guardamos en r el resultado que devuelva la funcion numeroBits
			printf("El n�mero de bits para representar %d es: %d ", a, r);
			break;//Sale del bucle al acabar el programa

		case 8:
			printf("Ejercicio 8: cambiar bits\n");//Proyectamos por pantalla
			printf("Introduzca un numero entero positivo: ");//Proyectamos por pantalla
			scanf_s("%d", &a);//Pedimos al usuario que inserte un numero y lo guardamos en la variable
			while (a < 0)
			{
				printf("Introduzca un numero entero positivo: ");
				scanf_s("%d", &a);
			}
			printf("Posicion del bit inicial a invertir: ");//Proyectamos por pantalla
			scanf_s("%d", &b);//Pedimos al usuario que inserte un numero y lo guardamos en la variable
			printf("Numero de bits a invertir ");//Proyectamos por pantalla
			scanf_s("%d", &c);//Pedimos al usuario que inserte un numero y lo guardamos en la variable
			r = cambiarBits(a, b, c);//Llamamos a la funci�n cambiarBits y guardamos en r el resultado que devuelva la funcion cambiarBits
			if (r == -1)
			{
				printf("N�mero de bits no valido");
			}
			else
			printf("El n�mero modificado es: %d ", r);
			break;//Sale del bucle al acabar el programa

		case 9:
			printf("Ejercicio 9: intercambiar\n");//Proyectamos por pantalla
			printf("Introduzca el primer numero: ");//Proyectamos por pantalla
			scanf_s("%lf", &p);//Pedimos al usuario que inserte un numero y lo guardamos en la variable
			printf("Introduzca el segundo numero: ");//Proyectamos por pantalla
			scanf_s("%lf", &i);//Pedimos al usuario que inserte un numero y lo guardamos en la variable
			printf("El contenido de los datos antes de enviar a la funcion son Primer numero : %.2f y del segundo numero %.2f\n", p, i);//Proyectamos por pantalla los datos insertados
			intercambiar(&p, &i);//Llamamos a la funci�n intercambiar, en este caso al usar punteros la funcion realiza el cambio tener que devolver nada
			printf("El contenido de los datos despues de enviar a la funcion son Primer numero : %.2f y del segundo numero %.2f", p, i); //Proyectamos por pantalla el resultado del programa
			break;//Sale del bucle al acabar el programa

		default:
			printf("ERROR: opcion incorrecta.\n");//Proyectamos por pantalla
			break;//Sale del bucle al acabar el programa
		}
		opcion = menu(); //Al realizar el break vuelve a llamar a la funcion menu
	}
	return 0; //FINAL DEL PROGRAMA;
}

int menu() //Apartado de desarrollo de la funcion menu
{
	int op; //variable local que va a almacenar la opcion elegida
	do
	{
		printf("\n" //Proyectamos en pantalla las diferentes opcion que se puede elegir
			"\t01.- Ejercicio 1\n"
			"\t02.- Ejercicio 2\n"
			"\t03.- Ejercicio 3\n"
			"\t04.- Ejercicio 4\n"
			"\t05.- Ejercicio 5\n"
			"\t06.- Ejercicio 6\n"
			"\t07.- Ejercicio 7\n"
			"\t08.- Ejercicio 8\n"
			"\t09.- Ejercicio 9\n"
			"\t010.- Salir\n"
			"\n"
			"Elija una opcion: ");

		scanf_s("%d", &op); //Pedimos al usuario que introduzca un numero para indicar la opcion elegida
		if (op < 1 || op > 10) //Condicional que indica que solo se puede introducir valores de 1 a 10
		{
			printf("Opci%cn no v%clida\n", 0xA2, 0xA0); //Mensaje que se muestra al introducir un numero que no est� en el rango indicado
		}
	} while (op < 1 || op > 10); //condicional que indica lo que hay que devolver al numero insertado mientras est� en el rango indicado
	return op; //Devolvemos el numero insertado a la variable que llam� a esta funci�n
}

int desplazar(int num, int Ndespazados)// Declaraci�n de la funci�n 'desplazar' que recibe dos argumentos:
{
	int result;   // Declara una variable entera 'result' que almacenar� el resultado del desplazamiento.
	result = num >> Ndespazados; // Realiza un desplazamiento de bits hacia la derecha en el n�mero 'num'.
	return result; // Devuelve el valor de 'result' como salida de la funci�n.
}

int Parimpar(int n) // Declaraci�n de la funci�n 'Parimpar' que recibe dos argumentos:
{
	if (n % 2 == 0)// Si el n�mero 'n' es divisible por 2 (es decir, es par), 
	{
		return 0; // Si 'n' es par, la funci�n devuelve 0.
	}
	else // Si 'n' no es divisible por 2 (es decir, es impar)
		return 1; // Si 'n' es impar, la funci�n devuelve 1
}

void operacionesLogicasBits()// Declaraci�n de la funci�n 'operacionesLogicasBits'
{
	int a = 8, b = 0, c = 15, d = 93, e, r1, r2, r3, r4, r5, r6; //Definimos las variables locales

	r1 = a && b || c && !d;   // r1 = 0  
	r2 = (!a || (b && c) || d);   // r2 = 1  
	r3 = a < b || !c > d;     // r3 = 0  
	r4 = a + b > d - c;       // r4 = 0 
	r5 = a && b && !c || !(a && b) && c;  // r5 = 1  

	a = 0x12; b = 0x56; c = 0x9a; d = 0x0f; e = 0360;

	r1 = a & b | c;          // r1 = 154
	r2 = c & 0177;           // r2 = 26
	r3 = ~a | b ^ c;         // r3 = -19
	r4 = e & c;              // r4 = 144
	r5 = r4 & ~077;          // r5 = 128 
	r6 = (a & d) << 4 | (a & e) >> 4;  // r6 = 33
}

int ponerAceroBit(int num, int Nposiciones) // Declaraci�n de la funci�n 'ponerAceroBit' que recibe dos argumentos:
{
	int resultado = 0, Mascara;// Declaraci�n de dos variables enteras:
	Mascara = 1 << Nposiciones;// Desplaza el bit 1 hacia la izquierda 'Nposiciones' veces, creando una m�scara.
	resultado = num & ~Mascara;   /* Aplicamos el complemento(~) a 'Mascara', invirtiendo todos los bits.Esto convierte
    todos los bits de la m�scara en 1, excepto el bit que queremos poner en 0. Luego, se realiza un AND bit a bit entre 'num' y el complemento de 'Mascara',*/
	return resultado;   // Devuelve el valor de 'resultado', que es 'num' con el bit especificado en la posici�n 'Nposiciones' puesto en 0.
}

int obtenerValorBit(int num, int p) // Funci�n que obtiene el valor del bit en la posici�n 'p' del n�mero 'num'
{
	int numero = 0; //Declaramos una variable 'numero' inicializada en 0
	numero = (num >> p) & 1; /* Desplazamos el n�mero 'num' hacia la derecha 'p' posiciones para que el bit en la posici�n 'p'
	quede en la posici�n menos significativa (posici�n 0), y luego usamos una operaci�n AND con 1
    para aislar ese bit. El resultado ser� 1 si el bit es 1, o 0 si es 0.*/
	return numero; // Devolvemos el valor del bit en la posici�n 'p'
}

long factorial(long g)// Funci�n que calcula el factorial de un n�mero 'g'
{
	long i = 0, j = 0; // Variables locales
	if (g >= 0 && g <= 16)
	{
		j = g - 1; // Inicializamos j como g - 1 (ser� el contador que decrece en el bucle)
		i = g * j; // Inicializamos i con el producto de g y j (g * (g - 1))
		while (j > 1) // Mientras j sea mayor que 1, seguimos calculando el producto
		{
			j--; // Decrementamos j en 1
			i = i * j; // Multiplicamos i por j
		}
	}
	else
	{
		return(-1);
	}

	return i; // Devolvemos el resultado final del factorial
}

int numeroBits(int n) // Funci�n que calcula el n�mero de bits necesarios para representar un n�mero entero 'n' en binario
{
	int j = 1; // Inicializa 'j' como 1, que cuenta el n�mero de bits
	int b = 2; // Inicializa 'b' como 2, que representa el valor en binario (2^1)
	while (b < n) // Mientras 'b' sea menor que 'n', seguimos multiplicando 'b' por 'j'
	{
		b = b * j; // Multiplica 'b' por 'j', esto incrementa el rango de 'b' (2^j)
		j++; // Incrementa 'j' para contar los bits
	}
	return j; // Devuelve el n�mero de bits necesarios para representar 'n'
}


int cambiarBits(int numero, int p, int n)
{
	int i = 0 ,mascara, posicion_b = 0;
	if (n > (p + 1))
	{
		return -1;
	}
	while ( i < n)
	{
		mascara = 1 << p;
		numero = numero ^ mascara;
		p--;
		i++;
	}
	return numero;
}


void intercambiar(double *n, double *m)
{
	double y = 0;
	y = *n;
	*n = *m;
	*m = y;
}