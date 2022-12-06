//include statements required for code to run
#include <iostream>
#include <map>
#include <string>
//using namespace std
using namespace std;
//Capital display function definition and parameter declaration
void dispCapitol(map<string, string> stateDataMap, string STATE) 
{
  map<string, string> :: iterator it = stateDataMap.find(STATE);
  if(it == stateDataMap.end()){
    cout << STATE << "not present" << endl;
  }
  else{
    cout << "Capitol of " << STATE << "is" << it->second << endl;
  }
}
//display map elements function definition
void dispMap(map<string, string> stateDataMap){
  for(map<string, string> ::iterator it = stateDataMap.begin(); it != stateDataMap.end(); it++)
    {
      cout << "State: " << it-> first << "Capitol: " << it-> second << endl;
      
    }
}
//main function for code testing and actual data map
int main(){

  map<string,string> stateDataMap;
//data for states and capitals corresponding to each one
  stateDataMap["Nebraska"] = "Lincoln";
  stateDataMap["Texas"] = "Austin";
  stateDataMap["Massachusetts"] = "Boston";
  stateDataMap["California"] = "Sacramento";
  stateDataMap["Ohio"] = "Columbus";
  stateDataMap["New York"] = "Albany";
//display data
  dispMap(stateDataMap);
//map change element for California Capital to LA
stateDataMap["Calinfornia"] = "LosAngeles";
  cout << "After Changing the capitol of California to Los Angeles" << endl;
//display data again after element change
  dispMap(stateDataMap);
  string STATE;
  //ask user for input of one of the states present in data
  cout << "input state name: ";
  //sea
  getline(cin,STATE);
  dispCapitol(stateDataMap, STATE);
  return 0;

  
}