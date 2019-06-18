int pinpot=A0;
int LED=10;
int ReadValue;
float WriteValue;
float Voltage;

void setup() {
 Serial.begin(9600);
 pinMode(pinpot,INPUT);
 pinMode(LED,OUTPUT);

}
void loop() {
 ReadValue=analogRead (pinpot);
 WriteValue =(255./1023.)*ReadValue;
 analogWrite(LED,WriteValue);
 Serial.print("tpinvalue");
 Serial.print(ReadValue);
 Serial.print("");
 Serial.print(WriteValue);
 Serial.print(" ");
 Serial.print("voltageValue");
 Serial.print(" " );
 Serial.print(Voltage);
 
 delay(5000);


}
