/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author F. de Sande
 * @date Nov 28, 2022
 * @brief Este programa genera un vector con size componentes y ejecuta nuemros aleatorios dentro de los intervalos, dicho por el usuario
 * https://www.geeksforgeeks.org/problem-in-comparing-floating-point-numbers-and-how-to-compare-them-correctly/
 * @see https://stackoverflow.com/a/17341/12791643
 */

#include <iostream>
#include <vector>
#include <random>
#include "vector.h"

void PrintProgramPurpose() {
  std::cout << "Este programa genera un vector con size componentes y ejecuta nuemros aleatorios dentro de los intervalos, dicho por el usuario" << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "Este programa ha sido ejecutado con la cantidad de parametros erroneos" << std::endl << std::endl;
    std::cout << "Uso esperado: ";
    std::cout << argv[0] << " tamaño_vector número_menor número_mayor" << std::endl;
    return false;
  }
  return true;
}

std::vector<double> GenerateVector(const int size, const double lower, const double upper) {
  std::vector <double> random_numbers;  
  if (lower < upper) {
    for (int i = 0; i < size; ++i) {
      double operation = (double)rand() / RAND_MAX; 
      random_numbers.push_back(lower + operation * (upper - lower));
    }
  } else {
    std::cout << "Error: El primer número es mayor que el segundo número" << std::endl;
    exit(EXIT_FAILURE); 
  }
  return random_numbers;
}