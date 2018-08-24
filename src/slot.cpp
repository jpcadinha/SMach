/*
 * slot.cpp
 *
 *  Created on: 24/08/2018
 *      Author: JP Cadinha
 */

#include "../include/slot.h"

Slot::Slot()
{
  this->wallet = new Wallet();
  this->spinners = new SpinnerList();
  this->spinners->add_spinner("ABBCDDEEEFFF");
  this->spinners->add_spinner("ABCCDDEEEFFF");
  this->spinners->add_spinner("ABCCDDEEFFFF");
  this->prize_engine = new PrizeEngine();
}

Slot::~Slot()
{
  delete wallet;
}

void Slot::run()
{
  int bet, prize = 0;
  std::string spin_res = "";

  print_balance();
  do {
      bet = get_bet();
      std::cout << std::endl;

      wallet->withdraw_funds(bet);
      spin_res = spinners->spin();
      std::cout << "Resultado: " << spin_res << std::endl;
      prize = prize_engine->evaluate(spin_res);
      std::cout << "Premio: " << prize * bet;
      if (prize > 0)
        std::cout << "(" << prize << " * " << bet << ")";
      std::cout << std::endl;

      wallet->deposit_funds(prize * bet);
      print_balance();
      std::cout << std::endl;
  } while (play_again());
}

bool Slot::play_again()
{
  std::string input = "";
  int input_length;
  char first_letter;

  std::cout << "Jogar de novo? (S/N) -> ";
  std::cin >> input;
  std::cin.clear();
  input_length = input.length();
  first_letter = toupper(input[0]);
  if (input_length == 1 && first_letter == 'S') {
    return true;
  } else if (input_length == 1 && first_letter == 'N') {
    return false;
  } else {
    std::cout << "Opcao invalida!" << std::endl;
    return play_again();
  }
}

void Slot::print_balance()
{
  std::cout << "Carteira : " << wallet->get_balance() << std::endl;
}

int Slot::get_bet()
{
  int max_bet, bet;
  std::string input;

  max_bet = wallet->get_balance();
  max_bet = max_bet < 10 ? max_bet : 10;
  do {
      std::cout << "Aposta (1 a " << max_bet << ") -> ";
      std::cin.clear();
      if (std::cin >> input) {
        bet = atoi(input.c_str());
        if (bet > 0 && bet <= max_bet)
          return bet;
      }
      std::cout << "Aposta invalida!" << std::endl;
  } while (true);

  return 0;
}