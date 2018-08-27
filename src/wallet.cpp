#include "wallet.h"

Wallet::Wallet() : balance(INITIAL_BALANCE)
{
}

Wallet::~Wallet()
{
}

bool Wallet::withdraw_funds(int amount)
{
  if (balance < amount)
    return false;
  balance -= amount;
  return true;
}

bool Wallet::deposit_funds(int amount)
{
  if (amount < 0)
    return false;
  balance += amount;
  return true;
}

int Wallet::get_balance()
{
  return balance;
}
