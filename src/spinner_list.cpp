#include "spinner_list.h"

SpinnerList::SpinnerList()
{
  spinner = NULL;
  next = NULL;
  srand(time(NULL));
}

SpinnerList::~SpinnerList()
{
  if (this->next)
    delete next;
  if (this->spinner)
    delete spinner;
}

void SpinnerList::add_spinner(std::string face_values)
{
  if (!this->spinner) {
    this->spinner = new Spinner_Ch(face_values);
  } else {
    if (!this->next)
      this->next = new SpinnerList();
    this->next->add_spinner(face_values);
  }
}

std::string SpinnerList::spin()
{
  std::string res = "";

  if (spinner)
    res += this->spinner->spin();
  if (next)
    res += next->spin();

  return res;
}
