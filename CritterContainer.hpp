#ifndef CRITTERCONTAINER_HPP
#define CRITTERCONTAINER_HPP

#include <vector>
using std::vector;
#include "Critter.hpp"


class CritterContainer
{
  public:
    CritterContainer();
    CritterContainer(int r, int c);
    void spawnAnt(CoordinatePair cp);
    void spawnDoodlebug(CoordinatePair cp);

  private:
    vector<Critter*> cage;
    int rows;
    int columns;
};


#endif // CRITTERCONTAINER_HPP
// END
