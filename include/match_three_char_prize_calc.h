#ifndef MATCHTHREECHARPRIZECALC_H_
#define MATCHTHREECHARPRIZECALC_H_

#include "prize_engine.h"

using namespace std;

class MatchThreeCharPrizeCalc : public PrizeEngine
{
public:
  MatchThreeCharPrizeCalc();
  virtual ~MatchThreeCharPrizeCalc();

  int evaluate(string result);
};

#endif /* MATCHTHREECHARPRIZECALC_H_ */
