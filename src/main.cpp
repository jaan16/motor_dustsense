#include "motor_control.hpp"

void setup() {
  initializePins();  // Initialize motor control pins
}

void loop() {
  // Example usage
  spinMotors();  // Spin motors for 1 second
  delay(1000);
  performValveCleaning();  // Perform valve cleaning with both motors
  delay(1000);
}
