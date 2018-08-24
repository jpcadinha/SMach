/*
 * prize_engine.cpp
 *
 *  Created on: 24/08/2018
 *      Author: JP Cadinha
 */

#include "../include/prize_engine.h"

PrizeEngine::PrizeEngine()
{
}

PrizeEngine::~PrizeEngine()
{
}

int PrizeEngine::evaluate(std::string result)
{
  int prize = 0;

  if (result == "AAA")
    prize = 1000;
  else if (result == "BBB")
    prize = 500;
  else if (result == "CCC")
    prize = 250;
  else if (result == "DDD")
    prize = 150;
  else if (result == "EEE")
    prize = 50;
  else if (result == "FFF")
    prize = 20;

  return prize;
}
