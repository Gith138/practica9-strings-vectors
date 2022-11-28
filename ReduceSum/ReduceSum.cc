/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author F. de Sande
 * @date Nov 28, 2022
 * @brief Este programa programa suma vectores
 *
 * https://www.geeksforgeeks.org/problem-in-comparing-floating-point-numbers-and-how-to-compare-them-correctly/
 * @see https://stackoverflow.com/a/17341/12791643
 */

#include <iostream>
#include <vector>
#include "ReduceSum.h"

void PrintProgramPurpose() {
  std::cout << "Este programa programa suma vectores" << std::endl;
}



double SumaVectores(int argc, char *argv[]) {
  std::vector<double> input_vector;
  for (int i{1}; i < argc; i++) {
    input_vector.push_back(std::stod(argv[i]));
  }
  double respuesta{0};
  for (double i{0}; i < input_vector.size(); i++) {
    respuesta += input_vector.at(i);
  }
  /*for (double elemento : input_vector) {
    respuesta += elemento;
  }*/
  return respuesta;
}
