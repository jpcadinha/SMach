/*
 * spinner_list.h
 *
 *  Created on: 24/08/2018
 *      Author: JP Cadinha
 */

#ifndef SPINNER_LIST_H_
#define SPINNER_LIST_H_

#include <string>
#include <time.h>
#include "../include/spinner.h"

class SpinnerList
{
public:
  SpinnerList();
  virtual ~SpinnerList();

  void add_spinner(std::string face_values);
  std::string spin();

private:
  Spinner * spinner;
  SpinnerList * next;
};

#endif /* SPINNER_LIST_H_ */
