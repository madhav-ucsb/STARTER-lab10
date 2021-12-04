#include "tddFuncs.h"
#include "strFuncs.h"
#include <iostream>
using std::cout;
using std::endl;


int main()
{
  assertTrue(isAnagram("" , ""), "Anagram Test");
  assertTrue(isAnagram("a" , "a"), "Anagram Test");
  assertTrue(isAnagram("racecar" , "carrace"), "Anagram Test");

  assertTrue(isPalindrome("racecar"), "Palindrome Test");

  assertTrue(!isPalindrome("race"), "Palindrome Test");

  assertTrue(!isPalindrome("ab"), "Palindrome Test");



  return 0;
}
