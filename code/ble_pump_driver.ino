//Pumps driven by pins 4 and 5
#define pump1 5
#define pump2 4

int incomingByte;

void setup() {
   Serial.begin(115200);
   pinMode(pump1, OUTPUT);
   pinMode(pump2, OUTPUT);
}

void loop() {
  // Read data from BLE App to control pin turning pump on/off
  if (Serial.available() > 0) {
    incomingByte = Serial.read();

    if(incomingByte == 'A') { 
      digitalWrite(pump1, HIGH); 
    }
    if(incomingByte == 'a') { 
      digitalWrite(pump1, LOW); 
    }
    if(incomingByte == 'B') {  
      digitalWrite(pump2, HIGH); 
    }
    if(incomingByte == 'b') {
      digitalWrite(pump2, LOW); 
    }
    if(incomingByte == 'P') {
      digitalWrite(pump1, LOW); 
      digitalWrite(pump2, LOW); 
    }
  }
}
