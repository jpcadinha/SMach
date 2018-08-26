/*
 * spinner.h
 *
 *  Created on: 24/08/2018
 *      Author: JP Cadinha
 */

#ifndef SPINNER_CH_H_
#define SPINNER_CH_H_

#include <string>
#include <cstdlib>
#include "spinner.h"

class Spinner_Ch : public Spinner
{
public:
  Spinner_Ch(std::string face_values);
  virtual ~Spinner_Ch();

  std::string spin();

private:
  std::string face_values;
};

#endif /* SPINNER_CH_H_ */
