//include statements implemented for code to run
#include <iostream>
#include "moveToRear.h"
#include <queue>

using namespace std;

//function definition
void moveToRear(queue QUE){
int segun;
  //checking for empty queue and continuing corresponding based on queue status
  if(!empty(QUE)){
    int prim = QUE.front();
    while(1)
      {
        //using cold variable(temporary) value to run through queue
        int cold = QUE.pop();
        if(cold == prim){int segun = QUE.front();
          break;
          }
        QUE.push(prim);
        }
    //same approach of checking the queue using the "cold" to check the queue and
    //push/pop to the back of the line
    QUE.push(prim);
    while(1){
      int cold = QUE.pop();
      if(cold == segun){QUE.push(prim);
        break;}
      QUE.push(prim);
      
    } 
      }
  }



