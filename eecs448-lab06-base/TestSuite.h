#ifndef TESTSUITE_H
#define TESTSUITE_H

#include <iostream>
#include <vector>
#include "List.h"
#include "Node.h"

class TestSuite {
  public:
    int runAllTest();
    bool exportBugList();

    //List Tests
    bool testDeconstructor();
    bool testIsEmpty();
    bool testSize();
    bool testSearch();
    bool testAddBack();
    bool testAddFront();
    bool testRemoveBack();
    bool testRemoveFront();

    //Node Tests
    bool testConstructor();
    bool testGetValue();
    bool testSetValue();
    bool testGetNext();
    bool testSetNext();


};


#endif
