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

// EXAMPLE of how to set the Motor number of poles, 
// every second we repit the setting and the reading of it


//Importing SOLO Arduino library
#include "SOLOMotorControllersUart.h" 

// instanciate a SOLO object
SOLOMotorControllers *SOLO_Obj1; 

// Motor's Number of Poles
long NumberOfPoles_write = 4; // Write 
long NumberOfPoles_read = 0; // Read

void setup() {
  Serial.begin(115200);

  //Initialize the SOLO object
  SOLO_Obj1 = new SOLOMotorControllersUart();  
}
  
void loop() {
  //Setting
  SOLO_Obj1->SetMotorPolesCounts(NumberOfPoles_write);

  //Reading
  NumberOfPoles_read = SOLO_Obj1->GetMotorPolesCounts();

  //Print
  Serial.println("\nRead from SOLO");
  Serial.println(NumberOfPoles_read);

  delay(1000);
}