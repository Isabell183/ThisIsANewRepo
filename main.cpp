//
//  main.cpp
//  Playground_183
//
//  Created by Isabell Astor on 2/17/19.
//  Copyright © 2019 Isabell Astor. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    /*int firstNum;
    int secondNum;
    int dCount;
    
    cin >> firstNum;
    
    if(firstNum > 0){
        while(firstNum > 0)
        {
            cin >> secondNum;
            if(firstNum == secondNum){
                dCount = 2;
                while(firstNum == secondNum){
                    cin >> secondNum;
                    if(firstNum == secondNum){
                        ++dCount;
                    }
                }
                
                if(dCount == 2){
                    dCount = 0;
                }
                firstNum = secondNum;
            }
            else {
                firstNum = secondNum;
            }
        }
        
        
        cout << dCount;
    }*/
    
    int numberOfEmployees;
    int payRate;
    int hoursWorkedDay;
    int hoursWorkedWeek = 0;
    int total = 0;
    
    cin >> numberOfEmployees;
    
    for(int i = 0; i < numberOfEmployees; i++){
        cin >> payRate;
        
        for(int j = 0; j < 5; j++){
            cin >> hoursWorkedDay;
            
            hoursWorkedWeek = (hoursWorkedWeek + hoursWorkedDay);
            
        }
        
        total = total + (hoursWorkedWeek * payRate);
        
    }
    
    cout << "Testing if my username made the switch" << endl;
   
    return 0;
}
