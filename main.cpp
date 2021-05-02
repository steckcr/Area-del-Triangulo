// 
// Curso de programación C++
// Steck Orozco Durán
// TAREA 1. EJERCICIO: AREA DE UN TRIANGULO
// 

#include <iostream>
                
int main() {

// Declaracion de la variable "base" del tipo flotante
float base=0;

// Declaracion de la variable "altura" del tipo flotante
float altura=0;

// Declaracion de la variable "resultado" del tipo flotante
float resultado=0;


// Lee dato del teclado
std::cout << "Ingrese el valor de la base del triángulo: " << std::endl;     
// Almacena el dato en "base"
std::cin >> base;                                                          

// Lee dato del teclado
std::cout << "Ingrese el valor de la altura del triángulo: " << std::endl;  
// Almacena el dato en "altura"
std::cin >> altura;                                                        

// Realiza la operacion del cálculo de la altura y lo almacena en "resultado"
resultado=(base*altura)/2; 

// Muestra el resultado del área
std::cout << "El área del triángulo es: " << resultado << std::endl; 

return 0;


}