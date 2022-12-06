#include <iostream>
#include "p"
using namespace std;

bool checkPalindrome(string word)
{
  if(word.length() <= 1)
  {
    return true;
    }
  
  if(word[0] == word[word.length()-1])
  {
    
    return checkPalindrome(word.substr(1,word.length()-2));
}
return false;
  }

