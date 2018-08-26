/*
 * slot.cpp
 *
 *  Created on: 24/08/2018
 *      Author: JP Cadinha
 */

#include "slot.h"

Slot::Slot()
{
  this->wallet = new Wallet();
  this->spinners = new SpinnerList();
  this->spinners->add_spinner("ABBCDDEEEFFF");
  this->spinners->add_spinner("ABCCDDEEEFFF");
  this->spinners->add_spinner("ABCCDDEEFFFF");
  this->prize_engine = new MatchThreeCharPrizeCalc();
}

Slot::~Slot()
{
  delete wallet;
}

void Slot::run()
{
  int bet, prize = 0;
  string spin_res = "";

  print_balance();
  do {
      bet = get_bet();
      cout << endl;

      wallet->withdraw_funds(bet);
      spin_res = spinners->spin();
      cout << "Resultado: " << spin_res << endl;
      prize = prize_engine->evaluate(spin_res);
      cout << "Premio: " << prize * bet;
      if (prize > 0)
        cout << "(" << prize << " * " << bet << ")";
      cout << endl;

      wallet->deposit_funds(prize * bet);
      print_balance();
      cout << endl;
  } while (play_again());
}

bool Slot::play_again()
{
  string input = "";
  int input_length;
  char first_letter;

  cout << "Jogar de novo? (S/N) -> ";
  cin >> input;
  cin.clear();
  input_length = input.length();
  first_letter = toupper(input[0]);
  if (input_length == 1 && first_letter == 'S') {
    return true;
  } else if (input_length == 1 && first_letter == 'N') {
    return false;
  } else {
    cout << "Opcao invalida!" << endl;
    return play_again();
  }
}

void Slot::print_balance()
{
  cout << "Carteira : " << wallet->get_balance() << endl;
}

int Slot::get_bet()
{
  int max_bet, bet;
  string input;

  max_bet = wallet->get_balance();
  max_bet = max_bet < 10 ? max_bet : 10;
  do {
      cout << "Aposta (1 a " << max_bet << ") -> ";
      cin.clear();
      if (cin >> input) {
        bet = atoi(input.c_str());
        if (bet > 0 && bet <= max_bet)
          return bet;
      }
      cout << "Aposta invalida!" << endl;
  } while (true);

  return 0;
}
