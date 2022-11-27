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
#include "concatenacion.h"


int main(const int argc, char *argv[]) {
  PrintProgramPurpose();
  std::vector<int> result = Concatenation(argc, argv);
  for (double operation : result ) {
    std::cout << operation << ' ';
  } std::cout << std::endl;
  return 0;
}