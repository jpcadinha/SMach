/*
 * spinner.h
 *
 *  Created on: 24/08/2018
 *      Author: JP Cadinha
 */

#ifndef SPINNER_H_
#define SPINNER_H_

#include <string>
#include <cstdlib>

#define NUM_FACES 12

class Spinner
{
public:
  Spinner(std::string face_values);
  virtual ~Spinner();

  char spin();

private:
  std::string face_values;
};

#endif /* SPINNER_H_ */
