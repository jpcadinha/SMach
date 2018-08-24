/*
 * prize_engine.h
 *
 *  Created on: 24/08/2018
 *      Author: JP Cadinha
 */

#ifndef PRIZE_ENGINE_H_
#define PRIZE_ENGINE_H_

#include <string>

class PrizeEngine
{
public:
  PrizeEngine();
  virtual ~PrizeEngine();

  int evaluate(std::string result);
};

#endif /* PRIZE_ENGINE_H_ */
