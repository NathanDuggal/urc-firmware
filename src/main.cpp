#include "main.hpp"

int main() {

  // // DEBUG
  // // Wait until serial monitor is opened before proceeding
  // while (!Serial) {
  // }
  // Serial.println("Serial port connected to Teensy 4.1!");

  Context context;
  manager::MotorManager motorManager(context);
  manager::EthernetManager ethernetManager(context);

  while (true) {
    ethernetManager.update(context);
    motorManager.update(context);
  }

  return 0;
}