#include <iostream>
#include "palindrome.h"
using namespace std;
//function definition that uses word string 
bool checkPalindrome(string word)
{
//checks word parameters going through and returning
  //through string to see if it fits palindrome characteristics
  
  if(word.length() <= 1)
  {
    return true;
    }
  
  if(word[0] == word[word.length()-1])
  {
    //checking again
    return checkPalindrome(word.substr(1,word.length()-2));
}
return false;
  }

