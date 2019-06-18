int pinPot=A0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode (pinPot,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int ReadValue;
ReadValue=analogRead(pinPot);
Serial.println(ReadValue);
delay(1000);
}
