#include "CritterContainer.hpp"
#include "Ant.hpp"
#include "Doodlebug.hpp"


CritterContainer::CritterContainer() {}


CritterContainer::CritterContainer(int c, int r) : rows(r), columns(c) {}


CritterContainer::~CritterContainer()
{
  for(int i = 0; i < cage.size(); ++i)
  {
    delete cage[i];
  }
  cage.clear();
}


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
  if(isOutOfBounds(cp))
  {
    return OUT_OF_BOUNDS;
  }
  for(unsigned int i = 0; i < cage.size(); ++i)
  {
    CritterStatus s = cage[i]->getStatus();
    if(s.coordinates == cp)
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


bool CritterContainer::isOutOfBounds(CoordinatePair cp)
{
  return (cp.x < 0 || cp.x >= columns || cp.y < 0 || cp.y >= rows);
}


// END
