#ifndef MEMBERS_H
#define MEMBERS_H

#include <iostream>
#include <string>
using namespace std;


class Member {
  protected:
    string name;
    string type;
    int age;


  public: 
    virtual void getMemberData() = 0; // Pure virtual because each child class will have a slightly different implementation
    void printMember();
    
};


class Father: public Member {
  public:
    Father();
    void getMemberData();

};

class Son: public Member {
  public:
    Son();
    void getMemberData();

};

class MemberFactory {
  public:
    static Member* createMember(int type);
};

#endif 