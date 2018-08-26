/*
 * main.cpp
 *
 *  Created on: 23/08/2018
 *      Author: JP Cadinha
 */
#include <iostream>
#include "slot.h"

int main(int argc, char **argv)
{
  Slot * slot_machine;

  std::cout << "*** FMQ SLOT MACHINE ***" << std::endl;
  slot_machine = new Slot();
  slot_machine->run();
  delete slot_machine;
  std::cout << "Obrigado por ter jogado!" << std::endl;

  return 0;
}



