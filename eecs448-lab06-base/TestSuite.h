#ifndef TESTSUITE_H
#define TESTSUITE_H

#include <iostream>
#include <vector>

class TestSuite {
  public:
    int runAllTest();
    bool exportBugList();
    void gatherBugs(int, int);

    //List Tests
    bool testIsEmpty();
    bool testSizeWithFront(int, int);
    bool testSizeWithBack(int, int);
    bool testSearchWithFront(int, int);
    bool testSearchWithBack(int, int);
    bool testAddBack(int, int);
    bool testAddFront(int, int);
    bool testRemoveBack(int, int);
    bool testRemoveFront(int, int);

  private:
    string daList = "";
};

#endif
