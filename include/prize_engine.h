/*
 * prize_engine.h
 *
 *  Created on: 24/08/2018
 *      Author: JP Cadinha
 */

#ifndef PRIZE_ENGINE_H_
#define PRIZE_ENGINE_H_

#include <string>

using namespace std;

enum PrizeCalculatorType {
    PC_ThreeChar
};

class PrizeEngine
{
public:
  virtual ~PrizeEngine() {};

  static PrizeEngine* Create(PrizeCalculatorType type);
  virtual int evaluate(string result) = 0;
};

#endif /* PRIZE_ENGINE_H_ */
