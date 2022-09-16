#include <iostream>
#include "family.h"


using namespace std;


int main() {
  int type;
  while (1) {
    cout<< "Enter Family you want (1: Poor, 2: Moderate, 3: Rich, 0: Exit): " ;
    cin >> type;

    if(type == 0){
      break;
    }

    Family *family = FamilyFactory::createFamily(type);
    cout << endl;

    family->printFamily();
    delete family;

  };
  
  return 0;

}