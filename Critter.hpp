#ifndef CRITTER_HPP
#define CRITTER_HPP


typedef struct
{
  int x;
  int y;
} CoordinatePair;


class Critter
{
  public:
    Critter();

  private:
    CoordinatePair coordinates;
};


#endif // CRITTER_HPP
// END
