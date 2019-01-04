
#include  <Ultrasonic.h>

Ultrasonic  ultrasonic(12,13);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int distance = ultrasonic.read();
  Serial.println(distance);
  delay(100);


if (distance < 15) {
     Serial.println("it's low");
  }
  
  else {
    Serial.println("it's high"); 
  }

  
}
