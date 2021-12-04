#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include "strFuncs.h"
#include "linkedListFuncs.h"
using namespace std;


/* Precondition: Two valid strings s1 and s2, each containing a mix of alphabets, spaces and punctuations
 * Post condition: Return true if one string is an anagram of the other string. White spaces, punctuations and
 * the case for the letters (upper or lower) should not
 * affect your result. 
 */
bool isAnagram(string s1, string s2){

  if(s1.size() == 0 && s2.size() ==0)
  {
    return true;
  }
  if(s1.size() == s2.size() && s1.size() == 1)
  {
    if(s1.compare(s2)==0)
    {
      return true;
    }
    else
    {
      return false;
    }
  }

  if(s1.size() != s2.size())
  {
    return false;
  }

  int len = s1.size();

  string s = s1.substr(0,1);

  int ind = s2.find(s);



  if(ind>=0 && ind<len)
  {
    s2 = s2.substr(0,ind) + s2.substr(ind+1,len);

    
    s1 = s1.substr(1,len);

    return isAnagram(s1,s2);
  }
  else
  {
    return false;
  }



  return true;
}

/* Precondition: s1 is a valid string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 * You should provide a recursive solution
 */
bool isPalindrome(const string s1){
  int len = s1.size();
  if(len<2)
  {
    return true;
  }
  else
  {
    if(s1.at(0)!=s1.at(len-1))
    {
      return false;
    }

    else
    {
      return isPalindrome(s1.substr(1, len-2));
    }
  }

  return true;
}


