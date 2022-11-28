/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Godgith John
 * @date Nov 28, 2022
 * @brief program that reads a non-empty sequence of integer numbers, 
 * and tells how many of them are equal to the last one.
 * 
 * https://www.geeksforgeeks.org/problem-in-comparing-floating-point-numbers-and-how-to-compare-them-correctly/
 * @see https://jutge.org/problems/P11725
 */


#include <iostream>
#include <vector>

int MostrarNumerosRepetidos(const std::vector<int>& numeros_repetidos, int capacidad) {
  int iteraciones= 0;
  for (unsigned int i = 0; i < numeros_repetidos.size(); i++) {
    if (numeros_repetidos[i] == numeros_repetidos[capacidad - 1]) {
      ++iteraciones;
    }
  }
  return iteraciones - 1;
}

int main() {
  int capacidad;
  int contenido;
  std::cin >> capacidad;
  std::vector <int> numeros_repetidos;
  for (int i = 0; i < capacidad; ++i) {
    std::cin >> contenido; 
    numeros_repetidos.push_back(contenido);
  }
  std::cout << MostrarNumerosRepetidos(numeros_repetidos, capacidad) << std::endl;
  return 0;
}
