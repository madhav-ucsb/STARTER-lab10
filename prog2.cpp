#include "tddFuncs.h"
#include "linkedListFuncs.h"
#include "recLinkedListFuncs.h"

#include <iostream>
using std::cout;
using std::endl;




using namespace std;


int main()
{
  int four [4] = {1,2,3,4};
  int zig [4] = {1,5,3,4};


  cout<<four[0]<<endl;
  
  LinkedList * lst = arrayToLinkedList(four, 4);
  cout<<linkedListToString(lst)<<endl;
  int sum = recursiveSum(lst->head);
  cout<<sum<<endl;
  
  Node * it = lst->head;

  LinkedList * list = arrayToLinkedList(zig, 4);

  Node * zigzag = list->head;




  
  assertEquals(recursiveSum(it) , 10, "Test of linked list sum");
  assertEquals(recursiveLargestValue(it) , 4, "Test of linked list largest value");
  assertEquals(recursiveSum(NULL) , 0, "Test of linked list sum for null");
  assertEquals(recursiveLargestValue(zigzag) , 5, "Zigzag linked list largest value");



  return 0;
}
