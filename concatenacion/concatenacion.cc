/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Godgith John
 * @date Nov 28, 2022
 * @brief Shows floating point arithmetics
 *
 * https://www.geeksforgeeks.org/problem-in-comparing-floating-point-numbers-and-how-to-compare-them-correctly/
 * @see https://stackoverflow.com/a/17341/12791643
 */

#include <iostream>
#include <vector>
#include "concatenacion.h"

void PrintProgramPurpose() {
  std::cout << "Este programa toma como parámetros dos vectores y devuelve como resultado un tercer vector que sea la concatenación de los dos vectores pasados." << std::endl;
}

std::vector<int> Concatenation(int argc, char *argv[]) {
  int vector_size = std::stoi(argv[1]);
  std::vector<int> vector_01;
  std::vector<int> vector_02;
  for (int i{2}; i < (vector_size + 2); i++) {
    vector_01.push_back(std::stoi(argv[i]));
  }
  int second_vector_size = std::stoi(argv[vector_size + 2]);
  for (int i{3};i < (second_vector_size + 3); i++) {
    vector_02.push_back(std::stoi(argv[i + vector_size]));
  }
  for (int pushing: vector_02) {
    vector_01.push_back(pushing);
  }
  return vector_01;
}
