#include <Arduino.h>

void setup() {
	Serial.begin(115200);
	pinMode(13, OUTPUT);
}
int n = 0;
void loop() {
	Serial.print("Arduino Hello ");
	Serial.println(n++);
	digitalWrite(13, HIGH);
	delay(1000);
	digitalWrite(13, LOW);
	delay(1000);
}

//	Hello Git!
// Branch master
