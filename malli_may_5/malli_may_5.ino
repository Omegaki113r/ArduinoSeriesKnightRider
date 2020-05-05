/*
 Name:		malli_may_5.ino
 Created:	5/5/2020 4:15:47 PM
 Author:	OmegaKiller
*/
int timer = 100;
// the setup function runs once when you press reset or power the board
void setup() {
    Serial.begin(9600);
    for (int i = 2; i < 8; i++)
    {
        Serial.println(i);
       pinMode(i, OUTPUT);
    }
}

// the loop function runs over and over again until power down or reset
void loop() {
    for (int i = 2; i < 8; i++)
    {
        digitalWrite(i, HIGH);
        delay(timer);
        digitalWrite(i, LOW);
    }
    for (int i = 7; i >= 2; i--)
    {
        digitalWrite(i, HIGH);
        delay(timer);
        digitalWrite(i, LOW);
    }
}
