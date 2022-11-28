/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Godgith John
 * @date Nov 28, 2022
 * @brief function that tells if the integer number x is present in the vector of integer numbers v.
 * In order to compare the efficiency of your solution 
 * against the efficiency of the solution of the Judge, start searching for x from the lowest positions
 * https://www.geeksforgeeks.org/problem-in-comparing-floating-point-numbers-and-how-to-compare-them-correctly/
 * @see https://jutge.org/problems/P11725_
 */

#include <iostream>
#include <vector>
#include <set>

bool exists(int x, const std::vector<int>& V);

int main() {
  int number;
  while (std::cin >> number) {
    std::vector<int> V(number);
    std::vector<int> S;
    for (int i = 0; i < number; ++i) {
      std::cin >> V[i];
      S.push_back(V[i]);
    }
    std::vector<int> A(S.begin(), S.end());
    int m = A.size();

    //std::cout << exists(1234, V) << std::endl;
    //std::cout << exists(-1000000, V) << std::endl;

    if (number < 100) {
      for (int i = 0; i < m; ++i) std::cout << exists(A[i], V) << std::endl;
      for (int i = 1; i < m; ++i)
        std::cout << exists((A[i] + A[i-1])/2, V) << std::endl;
    }
    else
      for (int i = 1000; i > 0; --i) {
        for (int j = 0; j < m; ++j) {
          std::cout << exists(A[i], V) << std::endl;
        }
    } 
  }
  
  return 0;
}


bool exists(int x, const std::vector<int>& v) {
  for (auto i : v) {
    if (i == x) {
      return true;
    } 
    return false;
  }
}
