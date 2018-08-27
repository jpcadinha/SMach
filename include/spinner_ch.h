#ifndef SPINNER_CH_H_
#define SPINNER_CH_H_

#include <string>
#include <cstdlib>
#include "spinner.h"

class Spinner_Ch : public Spinner
{
public:
  Spinner_Ch(string face_values);
  virtual ~Spinner_Ch();

  string spin();

private:
  string face_values;
};

#endif /* SPINNER_CH_H_ */
