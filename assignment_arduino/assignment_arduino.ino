int pinpot=A0;
int REDLED =10;
int Readvalue;
int Writevalue;
float voltage;
void setup() {
  Serial.begin(9600);
  pinMode (pinpot,INPUT);
  pinMode (REDLED,OUTPUT);
  
  // put your setup code here, to run once:

}

void loop() {
  Readvalue=analogRead(pinpot);
  Writevalue=(255./1023)*Readvalue;//calculate Write value//
  voltage=(5./1023.) *Readvalue;
  analogWrite (REDLED,Writevalue);//write value//
  Serial.print("tpinValue");
  Serial.print(Readvalue);
  Serial.print(" ");
  Serial.print("Mapped Value");
  Serial.print(" ");
  Serial.print("Writevalue");
  Serial.print(" ");
  Serial.print("voltage Value");
  Serial.print(" ");
  Serial.println("Voltage");
  analogWrite(REDLED,HIGH);
  delay(Readvalue);
  analogWrite(REDLED,LOW);












  
  delay(Readvalue);
  
  
  // put your main code here, to run repeatedly:

}
