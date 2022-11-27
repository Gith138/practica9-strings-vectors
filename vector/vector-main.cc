/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author F. de Sande
 * @date Nov 28, 2022
 * @brief Shows floating point arithmetics
 *
 * https://www.geeksforgeeks.org/problem-in-comparing-floating-point-numbers-and-how-to-compare-them-correctly/
 * @see https://stackoverflow.com/a/17341/12791643
 ** Main function
 *  @param[in] argc Number of command line parameters
 *  @param[in] argv Vector containing (char*) the parameters
 */

#include <iostream>
#include <vector>
#include <random>
#include "vector.h"


int main(const int argc, char *argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 4)) {
    return 345;
  }
  int size = std::stoi(argv[1]);
  double lower = std::stod(argv[2]);
  double upper = std::stod(argv[3]);
  std::vector<double> random_vector = GenerateVector(size, lower, upper);
  for (const double value: random_vector) {
    std::cout << "Component: " << value << std::endl;
  }
  return 0;
}