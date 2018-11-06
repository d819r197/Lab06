#include <iostream>
#include <string>
#include <vector>
#include <fstream>

#include "TestSuite.h"
#include "LinkedListOfInts.h"

int TestSuite::runAllTest(){
  //Helper Variables
  int passedTests = 0;
  int failedTests = 0;
  int testsRan = 0;

  std::cout<<"Tests have began\n";

  //Test IsEmpty()
  if(testIsEmpty()){ passedTests++; }
    testsRan++;

  //Test Size()
  if(testSizeWithFront(1, testsRan)){ passedTests++; }
  else { gatherBugs(1, testsRan); failedTests++; }
    testsRan++;
  if(testSizeWithFront(5, testsRan)){ passedTests++; }
  else { gatherBugs(5, testsRan); failedTests++; }
    testsRan++;
  if(testSizeWithFront(25, testsRan)){ passedTests++; }
  else { gatherBugs(25, testsRan); failedTests++; }
    testsRan++;
  if(testSizeWithFront(100, testsRan)){ passedTests++; }
  else { gatherBugs(100, testsRan); failedTests++; }
    testsRan++;
  if(testSizeWithFront(500, testsRan)){ passedTests++; }
  else { gatherBugs(500, testsRan); failedTests++; }
    testsRan++;
  if(testSizeWithFront(1000, testsRan)){ passedTests++; }
  else { gatherBugs(1000, testsRan); failedTests++; }
    testsRan++;
  if(testSizeWithFront(3000, testsRan)){ passedTests++; }
  else { gatherBugs(3000, testsRan); failedTests++; }
    testsRan++;
  if(testSizeWithFront(6000, testsRan)){ passedTests++; }
  else { gatherBugs(6000, testsRan); failedTests++; }
    testsRan++;
  if(testSizeWithFront(12000, testsRan)){ passedTests++; }
  else { gatherBugs(12000, testsRan); failedTests++; }
    testsRan++;
  if(testSizeWithFront(75000, testsRan)){ passedTests++; }
  else { gatherBugs(75000, testsRan); failedTests++; }
    testsRan++;

  if(testSizeWithBack(2, testsRan)){ passedTests++; }
  else { gatherBugs(2, testsRan); failedTests++; }
    testsRan++;
  if(testSizeWithBack(10, testsRan)){ passedTests++; }
  else { gatherBugs(10, testsRan); failedTests++; }
    testsRan++;
  if(testSizeWithBack(50, testsRan)){ passedTests++; }
  else { gatherBugs(50, testsRan); failedTests++; }
    testsRan++;
  if(testSizeWithBack(200, testsRan)){ passedTests++; }
  else { gatherBugs(200, testsRan); failedTests++; }
    testsRan++;
  if(testSizeWithBack(650, testsRan)){ passedTests++; }
  else { gatherBugs(650, testsRan); failedTests++; }
    testsRan++;
  if(testSizeWithBack(1000, testsRan)){ passedTests++; }
  else { gatherBugs(1000, testsRan); failedTests++; }
    testsRan++;
  if(testSizeWithBack(2500, testsRan)){ passedTests++; }
  else { gatherBugs(2500, testsRan); failedTests++; }
    testsRan++;
  if(testSizeWithBack(10000, testsRan)){ passedTests++; }
  else { gatherBugs(10000, testsRan); failedTests++; }
    testsRan++;
  if(testSizeWithBack(20000, testsRan)){ passedTests++; }
  else { gatherBugs(20000, testsRan); failedTests++; }
    testsRan++;
  if(testSizeWithBack(50000, testsRan)){ passedTests++; }
  else { gatherBugs(50000, testsRan); failedTests++; }
    testsRan++;

  //Test Search()
  if(testSearchWithFront(0, testsRan)){ passedTests++; }
  else { gatherBugs(0, testsRan); failedTests++; }
    testsRan++;
  if(testSearchWithFront(-5, testsRan)){ passedTests++; }
  else { gatherBugs(-5, testsRan); failedTests++; }
    testsRan++;
  if(testSearchWithFront(10, testsRan)){ passedTests++; }
  else { gatherBugs(10, testsRan); failedTests++; }
    testsRan++;
  if(testSearchWithFront(25, testsRan)){ passedTests++; }
  else { gatherBugs(25, testsRan); failedTests++; }
    testsRan++;
  if(testSearchWithFront(-100, testsRan)){ passedTests++; }
  else { gatherBugs(-100, testsRan); failedTests++; }
    testsRan++;
  if(testSearchWithFront(1000, testsRan)){ passedTests++; }
  else { gatherBugs(1000, testsRan); failedTests++; }
    testsRan++;
  if(testSearchWithFront(10000, testsRan)){ passedTests++; }
  else { gatherBugs(10000, testsRan); failedTests++; }
    testsRan++;
  if(testSearchWithFront(25000, testsRan)){ passedTests++; }
  else { gatherBugs(25000, testsRan); failedTests++; }
    testsRan++;
  if(testSearchWithFront(50000, testsRan)){ passedTests++; }
  else { gatherBugs(50000, testsRan); failedTests++; }
    testsRan++;
  if(testSearchWithFront(100000, testsRan)){ passedTests++; }
  else { gatherBugs(100000, testsRan); failedTests++; }
    testsRan++;

  if(testSearchWithBack(0, testsRan)){ passedTests++; }
  else { gatherBugs(0, testsRan); failedTests++; }
    testsRan++;
  if(testSearchWithBack(1, testsRan)){ passedTests++; }
  else { gatherBugs(1, testsRan); failedTests++; }
    testsRan++;
  if(testSearchWithBack(-1, testsRan)){ passedTests++; }
  else { gatherBugs(-1, testsRan); failedTests++; }
    testsRan++;
  if(testSearchWithBack(10, testsRan)){ passedTests++; }
  else { gatherBugs(10, testsRan); failedTests++; }
    testsRan++;
  if(testSearchWithBack(-10, testsRan)){ passedTests++; }
  else { gatherBugs(-10, testsRan); failedTests++; }
    testsRan++;
  if(testSearchWithBack(100, testsRan)){ passedTests++; }
  else { gatherBugs(100, testsRan); failedTests++; }
    testsRan++;
  if(testSearchWithBack(-100, testsRan)){ passedTests++; }
  else { gatherBugs(-100, testsRan); failedTests++; }
    testsRan++;
  if(testSearchWithBack(1000, testsRan)){ passedTests++; }
  else { gatherBugs(1000, testsRan); failedTests++; }
    testsRan++;
  if(testSearchWithBack(-1000, testsRan)){ passedTests++; }
  else { gatherBugs(-1000, testsRan); failedTests++; }
    testsRan++;
  if(testSearchWithBack(100000, testsRan)){ passedTests++; }
  else { gatherBugs(100000, testsRan); failedTests++; }
    testsRan++;

  //Test AddBack()
  if(testAddBack(5, testsRan)){ passedTests++; }
  else { gatherBugs(5, testsRan); failedTests++; }
    testsRan++;
  if(testAddBack(50, testsRan)){ passedTests++; }
  else { gatherBugs(50, testsRan); failedTests++; }
    testsRan++;
  if(testAddBack(500, testsRan)){ passedTests++; }
  else { gatherBugs(500, testsRan); failedTests++; }
    testsRan++;
  if(testAddBack(5000, testsRan)){ passedTests++; }
  else { gatherBugs(5000, testsRan); failedTests++; }
    testsRan++;
  if(testAddBack(-5, testsRan)){ passedTests++; }
  else { gatherBugs(-5, testsRan); failedTests++; }
    testsRan++;
  if(testAddBack(-50, testsRan)){ passedTests++; }
  else { gatherBugs(-50, testsRan); failedTests++; }
    testsRan++;
  if(testAddBack(-500, testsRan)){ passedTests++; }
  else { gatherBugs(-500, testsRan); failedTests++; }
    testsRan++;
  if(testAddBack(-5000, testsRan)){ passedTests++; }
  else { gatherBugs(-5000, testsRan); failedTests++; }
    testsRan++;
  if(testAddBack(50000, testsRan)){ passedTests++; }
  else { gatherBugs(50000, testsRan); failedTests++; }
    testsRan++;
  if(testAddBack(-50000, testsRan)){ passedTests++; }
  else { gatherBugs(-50000, testsRan); failedTests++; }
    testsRan++;

  //Test AddFront()
  if(testAddFront(5, testsRan)){ passedTests++; }
  else { gatherBugs(5, testsRan); failedTests++; }
    testsRan++;
  if(testAddFront(50, testsRan)){ passedTests++; }
  else { gatherBugs(50, testsRan); failedTests++; }
    testsRan++;
  if(testAddFront(500, testsRan)){ passedTests++; }
  else { gatherBugs(500, testsRan); failedTests++; }
    testsRan++;
  if(testAddFront(5000, testsRan)){ passedTests++; }
  else { gatherBugs(5000, testsRan); failedTests++; }
    testsRan++;
  if(testAddFront(-5, testsRan)){ passedTests++; }
  else { gatherBugs(-5, testsRan); failedTests++; }
    testsRan++;
  if(testAddFront(-50, testsRan)){ passedTests++; }
  else { gatherBugs(-50, testsRan); failedTests++; }
    testsRan++;
  if(testAddFront(-500, testsRan)){ passedTests++; }
  else { gatherBugs(-500, testsRan); failedTests++; }
    testsRan++;
  if(testAddFront(-5000, testsRan)){ passedTests++; }
  else { gatherBugs(-5000, testsRan); failedTests++; }
    testsRan++;
  if(testAddFront(50000, testsRan)){ passedTests++; }
  else { gatherBugs(50000, testsRan); failedTests++; }
    testsRan++;
  if(testAddFront(-50000, testsRan)){ passedTests++; }
  else { gatherBugs(-50000, testsRan); failedTests++; }
    testsRan++;

  //Test RemoveBack()
  if(testRemoveBack(100, testsRan)){ passedTests++; }
  else { gatherBugs(100, testsRan); failedTests++; }
    testsRan++;
  if(testRemoveBack(5, testsRan)){ passedTests++; }
  else { gatherBugs(5, testsRan); failedTests++; }
    testsRan++;
  if(testRemoveBack(50, testsRan)){ passedTests++; }
  else { gatherBugs(50, testsRan); failedTests++; }
    testsRan++;

  if(testRemoveBack(500, testsRan)){ passedTests++; }
  else { gatherBugs(500, testsRan); failedTests++; }
    testsRan++;
  if(testRemoveBack(5000, testsRan)){ passedTests++; }
  else { gatherBugs(5000, testsRan); failedTests++; }
    testsRan++;
  if(testRemoveBack(-5, testsRan)){ passedTests++; }
  else { gatherBugs(-5, testsRan); failedTests++; }
    testsRan++;
  if(testRemoveBack(-50, testsRan)){ passedTests++; }
  else { gatherBugs(-50, testsRan); failedTests++; }
    testsRan++;
  if(testRemoveBack(-500, testsRan)){ passedTests++; }
  else { gatherBugs(-500, testsRan); failedTests++; }
    testsRan++;
  if(testRemoveBack(-5000, testsRan)){ passedTests++; }
  else { gatherBugs(-5000, testsRan); failedTests++; }
    testsRan++;
  if(testRemoveBack(50000, testsRan)){ passedTests++; }
  else { gatherBugs(50000, testsRan); failedTests++; }
    testsRan++;
  if(testRemoveBack(-50000, testsRan)){ passedTests++; }
  else { gatherBugs(-50000, testsRan); failedTests++; }
    testsRan++;

//Test RemoveFront()
  if(testRemoveFront(100, testsRan)){ passedTests++; }
  else { gatherBugs(100, testsRan); failedTests++; }
    testsRan++;
  if(testRemoveFront(5, testsRan)){ passedTests++; }
  else { gatherBugs(5, testsRan); failedTests++; }
    testsRan++;
  if(testRemoveFront(50, testsRan)){ passedTests++; }
  else { gatherBugs(50, testsRan); failedTests++; }
    testsRan++;
  if(testRemoveFront(500, testsRan)){ passedTests++; }
  else { gatherBugs(500, testsRan); failedTests++; }
    testsRan++;
  if(testRemoveFront(5000, testsRan)){ passedTests++; }
  else { gatherBugs(5000, testsRan); failedTests++; }
    testsRan++;
  if(testRemoveFront(-5, testsRan)){ passedTests++; }
  else { gatherBugs(-5, testsRan); failedTests++; }
    testsRan++;
  if(testRemoveFront(-50, testsRan)){ passedTests++; }
  else { gatherBugs(-50, testsRan); failedTests++; }
    testsRan++;
  if(testRemoveFront(-500, testsRan)){ passedTests++; }
  else { gatherBugs(-500, testsRan); failedTests++; }
    testsRan++;
  if(testRemoveFront(-5000, testsRan)){ passedTests++; }
  else { gatherBugs(-5000, testsRan); failedTests++; }
    testsRan++;
  if(testRemoveFront(50000, testsRan)){ passedTests++; }
  else { gatherBugs(50000, testsRan); failedTests++; }
    testsRan++;
  if(testRemoveFront(-50000, testsRan)){ passedTests++; }
  else { gatherBugs(-50000, testsRan); failedTests++; }
    testsRan++;

  std::cout<<"Tests have Ended\n";
  exportBugList();
  return(passedTests);
}

bool TestSuite::exportBugList() {
  if(daList != "") {
    std::ofstream buglist;

    buglist.open("buglist.txt");
    buglist <<  daList;
    buglist.close();

    return true;
  }
  else {
    return false;
  }
}

void TestSuite::gatherBugs(int x, int testsRan, string test){
  string bug = "Test " + testsRan + ": failed with input: " + x + " on test: " + test + ".\n";
  daList += bug;
}

//List Tests
bool TestSuite::testIsEmpty(){
  LinkedListOfInts testList;

  std::cout << "Test 0: size of empty list is zero: ";
  if(testList.isEmpty()) {
    std::cout <<"True \n";
    return true;
  }
  else {
    std::cout << "False \n";
    return false;
  }
}

bool TestSuite::testSizeWithFront(int x, int testsRan){
  LinkedListOfInts testList;
    std::cout << "Test " << testsRan <<": size returns correct value after " << x <<" addFront: ";
    for(int lcv = 0; lcv < x; lcv++) {
      testList.addFront(lcv*3);
    }
    if(testList.size() == x) {
      std::cout<<"True \n";
      return true;
    }
    else {
      std::cout << "False \n";
      return false;
    }
}

bool TestSuite::testSizeWithBack(int x, int testsRan){
  LinkedListOfInts testList;
    std::cout << "Test " << testsRan <<": size returns correct value after " << x <<" addBack: ";
    for(int lcv = 0; lcv < x; lcv++) {
      testList.addFront(lcv*3);
    }
    if(testList.size() == x) {
      std::cout<<"True \n";
      return true;
    }
    else {
      std::cout << "False \n";
      return false;
    }
}


bool TestSuite::testSearchWithFront(int x, int testsRan){
  LinkedListOfInts testList;
  std::cout << "Test " << testsRan <<": size returns correct value after inserting " << x <<" with addFront: ";

  testList.addFront(x);
  if(testList.search(x)) {
    std::cout << "True \n";
    return true;
  }
  else {
    std::cout << "False \n";
    return false;
  }
}

bool TestSuite::testSearchWithBack(int x, int testsRan){
  LinkedListOfInts testList;
  std::cout << "Test " << testsRan <<": search returns correct value after inserting " << x <<" with addBack: ";

  testList.addBack(x);

  if(testList.search(x)) {
    std::cout << "True \n";
    return true;
  }
  else {
    std::cout << "False \n";
    return false;
  }
}

bool TestSuite::testAddBack(int x, int testsRan){
  LinkedListOfInts testList;
  std::vector<int> testVector;

  std::cout << "Test " << testsRan <<": addBack returns correct value after inserting " << x <<" using addBack: ";

  testList.addBack(0);
  testList.addBack(-1);
  testList.addBack(x);
    testVector = testList.toVector();

  if(testVector.at(2) == x) {
    std::cout << "True \n";
    return true;
  }
  else {
    std::cout << "False \n";
    return false;
  }
}

bool TestSuite::testAddFront(int x, int testsRan){
  LinkedListOfInts testList;
  std::vector<int> testVector;

  std::cout << "Test " << testsRan <<": addFront returns correct value after inserting " << x <<" using addFront: ";

  testList.addFront(0);
  testList.addFront(-1);
  testList.addFront(x);
    testVector = testList.toVector();

  if(testVector.at(0) == x) {
    std::cout << "True \n";
    return true;
  }
  else {
    std::cout << "False \n";
    return false;
  }
}
bool TestSuite::testRemoveBack(int x, int testsRan){
  LinkedListOfInts testList;
  std::vector<int> testVector;

  std::cout << "Test " << testsRan <<": RemoveBack returns correct value: ";

  testList.addFront(x);
  testList.addFront(-1);
  testList.addFront(0);
  testList.removeBack();
    testVector = testList.toVector();

  if(testVector.at(0) != x && testVector.size() == 2) {
    std::cout << "True \n";
    return true;
  }
  else {
    std::cout << "False \n";
    return false;
  }
}
bool TestSuite::testRemoveFront(int x, int testsRan){
  LinkedListOfInts testList;
  std::vector<int> testVector;

  std::cout << "Test " << testsRan <<": RemoveFront returns correct value: ";

  testList.addFront(0);
  testList.addFront(-1);
  testList.addFront(x);
  testList.removeFront();
    testVector = testList.toVector();
  if(testVector.at(2) != x && testVector.size() == 2) {
    std::cout << "True \n";
    return true;
  }
  else {
    std::cout << "False \n";
    return false;
  }
}
