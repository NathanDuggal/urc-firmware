// Copyright: (c) 2021, SOLO motor controllers project
// GNU General Public License v3.0+ (see COPYING or https://www.gnu.org/licenses/gpl-3.0.txt)

/*
*    Title: SOLO Motor Controllers Arduino Library
*    Author: SOLOMotorControllers
*    Date: 2022
*    Code version: 3.0
*    Availability: https://github.com/Solo-FL/SOLO-motor-controllers-ARDUINO-library

This Library is made by SOLOMotorControllers.COM
It can be used with UART line of Arduino or any similar controller to control, command
or read all the parameters that are stored or existing in command set of SOLO. to learn more
please visit:  https://www.SOLOMotorControllers.com/

*/

// EXAMPLE of how read the SOLO board temperature, 
// every second we print the value of the temperature


//Importing SOLO Arduino library
#include "SOLOMotorControllersUart.h" 

// instanciate a SOLO object
SOLOMotorControllers *SOLO_Obj1; 

float Temperature=0; 
int error;

void setup() {
  Serial.begin(115200);
  SOLO_Obj1 = new SOLOMotorControllersUart(); 
}
  
void loop() {
  //Reading
  Temperature = SOLO_Obj1->GetBoardTemperature(error);

  //Print
  Serial.println("Read from SOLO");
  Serial.println(Temperature,7);
  Serial.println("Error");
  Serial.println(error);

  delay(1000);
}
