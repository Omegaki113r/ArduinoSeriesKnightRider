/*
 Name:		digital_meter.ino
 Created:	5/8/2020 12:03:49 AM
 Author:	OmegaKiller
*/


int trigpin = 8;
int echopin = 7;

float duration, distance;

// the setup function runs once when you press reset or power the board
void setup() {
    Serial.begin(115200);
    pinMode(trigpin, OUTPUT);
    pinMode(echopin, INPUT);

    pinMode(13, OUTPUT);
}

// the loop function runs over and over again until power down or reset
void loop() {
    long duration, distance;
    digitalWrite(trigpin, LOW);  // Added this line
    delayMicroseconds(2); // Added this line
    digitalWrite(trigpin, HIGH);
    //  delayMicroseconds(1000); - Removed this line
    delayMicroseconds(10); // Added this line
    digitalWrite(trigpin, LOW);
    duration = pulseIn(echopin, HIGH);
    distance = (duration / 2) / 29.1;

    Serial.println(distance);

    if (distance < 15) {
        digitalWrite(13, HIGH);
    }
    else
    {
        digitalWrite(13, LOW);
    }
    delay(500);
}
