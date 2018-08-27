/*
 * MatchThreeCharPrizeCalc.h
 *
 *  Created on: 27/08/2018
 *      Author: JP Cadinha
 */

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
