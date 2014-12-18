#include "CritterContainer.hpp"
#include "Ant.hpp"
#include "Doodlebug.hpp"


CritterContainer::CritterContainer() {}


CritterContainer::CritterContainer(int r, int c) : rows(r), columns(c) {}


void CritterContainer::spawnAnt(CoordinatePair cp)
{
  cage.push_back(new Ant(cp));
}


void CritterContainer::spawnDoodlebug(CoordinatePair cp)
{
  cage.push_back(new Doodlebug(cp));
}


// END
