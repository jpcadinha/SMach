/*
 * Wallet.h
 *
 *  Created on: 23/08/2018
 *      Author: JP Cadinha
 */

#ifndef WALLET_H_
#define WALLET_H_

#define INITIAL_BALANCE 10000

class Wallet
{
public:
  Wallet ();
  virtual
  ~Wallet ();
  bool withdraw_funds(int amount);
  bool deposit_funds(int amount);
  int get_balance();

private:
  int balance;
};

#endif /* WALLET_H_ */
