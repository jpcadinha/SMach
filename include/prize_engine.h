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

class PrizeEngine
{
public:
  PrizeEngine() {};
  virtual ~PrizeEngine() {};

  virtual int evaluate(string result) = 0;
};

#endif /* PRIZE_ENGINE_H_ */
