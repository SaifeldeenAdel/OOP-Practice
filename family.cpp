#include <iostream>
#include "family.h"
#include "members.h"


void Family::getFamilyData(){
  // Calls the createMember function to return a pointer to a father or son object, adds it to the members vector
  Member *father = MemberFactory::createMember(1);
  members.push_back(father);
  Member *son = MemberFactory::createMember(2);
  members.push_back(son);

}

void Family::printFamily() {
  cout << "Family Status: " << status << endl;
  for (iter = members.begin(); iter < members.end(); iter++)
  {
    cout << "I'm " << status << "!    "; (*iter)->printMember();
    cout << endl;
  }
  cout<< endl;
}

Poor::Poor() {
  status = "Poor";
}

Moderate::Moderate() {
  status = "Moderate";
}

Rich::Rich() {
  status = "Rich";
}


// Static function so it can be used without instantiating FamilyFactor object
Family* FamilyFactory::createFamily(int type) {
  Family *family = NULL;

  //  Instantiates specific family based on type input, returns a pointer to the object it created using 'new'
  switch (type){
    case 1:
      family = new Poor;
      break;

    case 2:
      family = new Moderate;
      break;

    case 3:
      family = new Rich;
      break;
    
    default:
      break;
  }
  
  // Gets the family data, so it works regardless of family type 
  family->getFamilyData();
  return family;
  
}
