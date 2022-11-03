/*
Patrick Ging 
Professor Zamanksy
Lab Cypher
main.cpp
*/

#include <iostream>
#include "caesar.h"
#include "funcs.h"

int main()
{

  std::cout << '\"' + encryptCaesar("This is my frequency analysis!", 11) + '\"' << " decrypted is " << '\"' + solve(encryptCaesar("This is my frequency analysis!", 13)) + '\"' << std::endl;

  std::cout << '\"' + encryptCaesar("I like apples, oranges, pears, and grapes", 2) + '\"' << " decrypted is " << '\"' + solve(encryptCaesar("I like apples, oranges, pears, and grapes", 2)) + '\"'<< std::endl;

  std::cout << '\"' + encryptCaesar("The powerball this week is a billion dollars", 20) + '\"' << " decrypted is " << '\"' + solve(encryptCaesar("The powerball this week is a billion dollars", 20)) + '\"' << std::endl;

  return 0;
}
