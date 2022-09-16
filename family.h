#ifndef FAMILY_H

#define FAMILY_H

#include <iostream>
#include <string>
#include <vector>
#include "members.h"
using namespace std;

class Family {
  protected:
    string status;
    vector<Member*> members;
    vector<Member*>::iterator iter;

  public:
    void getFamilyData();
    void printFamily();
};


class Poor: public Family{
  public:
    Poor();
};

class Moderate: public Family{
  public:
    Moderate();
};

class Rich: public Family{
  public:
    Rich();
};


class FamilyFactory {
private:
public:
  // Static function so it can be used without instantiating FamilyFactor object
  static Family* createFamily(int type);
};

#endif