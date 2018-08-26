/*
 * Spinner.h
 *
 *  Created on: 26/08/2018
 *      Author: JP Cadinha
 */

#ifndef SPINNER_H_
#define SPINNER_H_

#include <string>

using namespace std;

class Spinner
{
public:
  Spinner();
  virtual ~Spinner();

  virtual string spin() = 0;
};

#endif /* SPINNER_H_ */
