/*
 * spinner.cpp
 *
 *  Created on: 24/08/2018
 *      Author: JP Cadinha
 */

#include <spinner_ch.h>

Spinner_Ch::Spinner_Ch(std::string face_values)
{
  this->face_values = face_values;
}

Spinner_Ch::~Spinner_Ch()
{
}

std::string Spinner_Ch::spin()
{
  std::string res = "";
  int num_faces = 0;

  num_faces = face_values.length();
  if (num_faces > 0) {
    res += face_values[std::rand() % num_faces];
  }

  return res;
}
