#include "spinner_ch.h"

Spinner_Ch::Spinner_Ch(string face_values)
{
  this->face_values = face_values;
}

Spinner_Ch::~Spinner_Ch()
{
}

string Spinner_Ch::spin()
{
  string res = "";
  int num_faces = 0;

  num_faces = face_values.length();
  if (num_faces > 0) {
    res += face_values[rand() % num_faces];
  }

  return res;
}
