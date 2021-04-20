// 
// Curso de programación C++
// Steck Orozco Durán
// TAREA 1. EJERCICIO: AREA DE UN TRIANGULO
// 

#include <iostream>

float base=0;             // Declaracion de la variable "base" del tipo flotante
float altura=0;           // Declaracion de la variable "altura" del tipo flotante
float resultado=0;        // Declaracion de la variable "resultado" del tipo flotante


int main() {
std::cout << "Ingrese el valor de la base del triángulo: " << std::endl;   // Lee dato del teclado y  
std::cin >> base;                                                          // lo almacena en "base"

std::cout << "Ingrese el valor de la altura del triángulo: " << std::endl; // Lee dato del teclado y
std::cin >> altura;                                                        // lo almacena en "altura"


resultado=(base*altura)/2; // Realiza la operacion del cálculo de la altura y lo almacena en "resultado"

std::cout << "El área del triángulo es: " << resultado << std::endl; // Muestra el resultado del área


return (0);


}