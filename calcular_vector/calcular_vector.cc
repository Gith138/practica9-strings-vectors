/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Godgith John
 * @date Nov 28, 2022
 * @brief "Este programa calcula los valores máximo, mínimo y promedio de todos los valores almacenados en el vector.
 *
 * https://www.geeksforgeeks.org/problem-in-comparing-floating-point-numbers-and-how-to-compare-them-correctly/
 * @see https://stackoverflow.com/a/17341/12791643
 */

#include <iostream>
#include <vector>
#include "calcular_vector.h"

void PrintProgramPurpose() {
  std::cout << "Este programa calcula los valores máximo, mínimo y promedio de todos los valores almacenados en el vector." << std::endl;
}

std::vector <double> Operation(int argc, char* argv[]) {
  double menor = std::stod(argv[1]), mayor, promedio;
  std::vector<double> input_vector, resultado;
  for (int i{1}; i < argc; i++) {
    input_vector.push_back(std::stod(argv[i]));
  } 
  for (double i: input_vector) {
    if (i < menor) {
      menor = i;
    }
    if (i > mayor) {
      mayor = i;
    }
    promedio += i;
  }
  promedio = promedio / input_vector.size();
  resultado = { menor, mayor, promedio};
  return resultado;
}


