#include <iostream>
#include "members.h"
using namespace std;

void Member::printMember() {
  cout << type << " - " << "Name: " << name << ", Age: " << age;
}

Father::Father() {
  type = "Father";
}

void Father::getMemberData() {
  cout << "Father name: ";
  cin >> name;
  cout << "Father age: ";
  cin >> age;
}

Son::Son() {
  type = "Son";
}

void Son::getMemberData() {
  cout << "Son name: ";
  cin >> name;
  cout << "Son age: ";
  cin >> age;
}

Member* MemberFactory::createMember(int type) {
  Member *member = NULL;
  switch (type){
    case 1:
      member = new Father;
      break;
    
    case 2:
      member = new Son;
      break;
    
    default:
      break;
  }

  member->getMemberData();
  return member;

}


