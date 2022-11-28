/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Godgith John
 * @date 28.nov.2022
 * @brief Este programa genera un vector con size componentes y ejecuta nuemros aleatorios dentro de los intervalos, dicho por el usuario
 * @see https://docs.google.com/document/d/1-3hTIVf8tPrbn9u0vs0Cm2IGyX1XBgv8hReVU0KOSUQ/edit?usp=sharing
 * @see stoi http://www.cplusplus.com/reference/string/stoi/
 * An Object Oriented Version of the program:
 * @see https://stackoverflow.com/questions/21360694/sum-of-even-fibonacci-numbers-under-1000
 *
 */

#include<vector>
#include<random>

void PrintProgramPurpose();
bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber);
std::vector<double> GenerateVector(const int size, const double lower, const double upper);