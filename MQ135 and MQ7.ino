int SensorPin = A0;
int Sensor =A1;
int SensorValue =0;
int Val =0;
void setup() {
  Serial.begin(9600);
 // put your setup code here, to run once:

}

void loop() {
  SensorValue = analogRead(SensorPin);  
  Val = analogRead(Sensor);  
  Serial.print("MQ135:");  
  Serial.println(SensorValue);
   Serial.print("MQ7:"); 
  Serial.println(Val);
  delay(1000);
  // put your main code here, to run repeatedly:

}
