#include "prize_engine.h"
#include "match_three_char_prize_calc.h"

PrizeEngine* PrizeEngine::Create(PrizeCalculatorType type)
{
  if (type == PC_ThreeChar)
    return new MatchThreeCharPrizeCalc();
  return NULL;
}


