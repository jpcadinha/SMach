/*
 * main.cpp
 *
 *  Created on: 23/08/2018
 *      Author: JP Cadinha
 */
#include <iostream>
#include <ctype.h>

using namespace std;

bool initialize() {
  return true;
}

bool play_again() {
  string input = "";

  std::cout << "Jogar de novo? (S/N) -> ";
  std::cin >> input;
  std::cin.clear();
  //TODO remove double call to input.length
  if (input.length() == 1 && toupper(input[0]) == 'S') {
    return true;
  } else if (input.length() == 1 && toupper(input[0]) == 'N') {
    return false;
  } else {
    std::cout << "Opcao invalida!" << std::endl;
    return play_again();
  }
}

int main(int argc, char **argv) {
  std::cout << "*** FMQ SLOT MACHINE ***" << std::endl;

  if (!initialize())
    return 1;

  do {
    //Get the user input

    //Update game state

    //Render output
  } while (play_again());

  std::cout << "Obrigado por ter jogado!" << std::endl;

  return 0;
}



