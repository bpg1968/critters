#ifndef CRITTERCONTAINER_HPP
#define CRITTERCONTAINER_HPP

#include <vector>
using std::vector;
#include "Critter.hpp"


enum CellStatus {OCCUPIED_BY_ANT, OCCUPIED_BY_DOODLEBUG, EMPTY, OUT_OF_BOUNDS};


class CritterContainer
{
  public:
    CritterContainer();
    CritterContainer(int r, int c);
    ~CritterContainer();
    void spawnAnt(CoordinatePair cp);
    void spawnDoodlebug(CoordinatePair cp);
    CellStatus getCellStatus(CoordinatePair cp);

  private:
    bool isOutOfBounds(CoordinatePair cp);
    vector<Critter*> cage;
    int rows;
    int columns;
};


#endif // CRITTERCONTAINER_HPP
// END
