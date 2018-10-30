#include <iostream>
#include <string>

#include "TestSuite.h"
#include "List.h"

int TestSuite::runAllTest(){
  const int testNum = 13;
  int passedTests = 0;

  std::cout<<"Tests have began\n";

  if(testDeconstructor()){ passedTests++; }
  if(testIsEmpty()){ passedTests++; }
  if(testSize()){ passedTests++; }
  if(testSearch()){ passedTests++; }
  if(testAddBack()){ passedTests++; }
  if(testAddFront()){ passedTests++; }
  if(testRemoveBack()){ passedTests++; }
  if(testRemoveFront()){ passedTests++; }

  //Node Tests
  if(testConstructor()){ passedTests++; }
  if(testGetValue()){ passedTests++; }
  if(testSetValue()){ passedTests++; }
  if(testGetNext()){ passedTests++; }
  if(testSetNext()){ passedTests++; }

  std::cout<<"Tests have Ended\n";
 }

bool TestSuite::exportBugList(){

}

//List Tests
bool TestSuite::testDeconstructor(){

}

bool TestSuite::testIsEmpty(){

}
bool TestSuite::testSize(){
}
bool TestSuite::testSearch(){
}
bool TestSuite::testAddBack(){
 }
bool TestSuite::testAddFront(){
}
bool TestSuite::testRemoveBack(){
}
bool TestSuite::testRemoveFront(){
}

//Node Tests
bool TestSuite::testConstructor(){
 }
bool TestSuite::testGetValue(){
}
bool TestSuite::testSetValue(){
}
bool TestSuite::testGetNext(){
}
bool TestSuite::testSetNext(){
}
