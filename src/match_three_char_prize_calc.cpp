#include <match_three_char_prize_calc.h>

MatchThreeCharPrizeCalc::MatchThreeCharPrizeCalc()
{
}

MatchThreeCharPrizeCalc::~MatchThreeCharPrizeCalc()
{
}

int MatchThreeCharPrizeCalc::evaluate(string result)
{
  int prize = 0;

// Old prize list
//  if (result == "AAA")
//    prize = 1000;
//  else if (result == "BBB")
//    prize = 500;
//  else if (result == "CCC")
//    prize = 250;
//  else if (result == "DDD")
//    prize = 150;
//  else if (result == "EEE")
//    prize = 50;
//  else if (result == "FFF")
//    prize = 20;

  if (result == "AAA")
    prize = 400;
  else if (result == "BBB")
    prize = 180;
  else if (result == "CCC")
    prize = 70;
  else if (result == "DDD")
    prize = 32;
  else if (result == "EEE")
    prize = 12;
  else if (result == "FFF")
    prize = 6;

  return prize;
}
