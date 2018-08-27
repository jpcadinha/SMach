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
