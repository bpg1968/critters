#include "CritterContainer.hpp"
#include "Ant.hpp"
#include "Doodlebug.hpp"


CritterContainer::CritterContainer() {}


CritterContainer::CritterContainer(int c, int r) : rows(r), columns(c) {}


void CritterContainer::spawnAnt(CoordinatePair cp)
{
  cage.push_back(new Ant(cp));
}


void CritterContainer::spawnDoodlebug(CoordinatePair cp)
{
  cage.push_back(new Doodlebug(cp));
}


CellStatus CritterContainer::getCellStatus(CoordinatePair cp)
{
  if(cp.x < 0 || cp.x >= columns || cp.y < 0 || cp.y >= rows)
  {
    return OUT_OF_BOUNDS;
  }
  for(unsigned int i = 0; i < cage.size(); ++i)
  {
    CritterStatus s = cage[i]->getStatus();
    if(s.coordinates.x == cp.x && s.coordinates.y == cp.y)
    {
      if(s.type == ANT)
      {
        return OCCUPIED_BY_ANT;
      }
      if(s.type == DOODLEBUG)
      {
        return OCCUPIED_BY_DOODLEBUG;
      }
    }
  }
  return EMPTY;
}


// END
