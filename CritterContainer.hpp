#ifndef CRITTERCONTAINER_HPP
#define CRITTERCONTAINER_HPP

#include <vector>
using std::vector;
#include "Critter.hpp"


class CritterContainer
{
  public:
    CritterContainer();

  private:
    vector<Critter> cage;
};


#endif // CRITTERCONTAINER_HPP
// END
