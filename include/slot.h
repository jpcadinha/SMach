/*
 * slot.h
 *
 *  Created on: 24/08/2018
 *      Author: JP Cadinha
 */

#ifndef SLOT_H_
#define SLOT_H_

#include <iostream>
#include <ctype.h>
#include <string>
#include <stdlib.h>
#include "wallet.h"
#include "prize_engine.h"
#include "spinner_list.h"

class Slot
{
public:
  Slot ();
  virtual ~Slot ();

  void run();

private:
  Wallet * wallet;
  SpinnerList * spinners;
  PrizeEngine * prize_engine;

  bool play_again();
  void print_balance();
  int get_bet();

};

#endif /* SLOT_H_ */
