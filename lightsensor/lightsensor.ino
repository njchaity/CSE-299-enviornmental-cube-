#define LIGHT_SENSOR 12
const int ledPin=12;             
const int thresholdvalue=10;   
float Rsensor;
void setup() {
  Serial.begin(9600);               
    pinMode(ledPin,OUTPUT); 

}

void loop() {
   int sensorValue = analogRead(LIGHT_SENSOR); 
    Rsensor = (float)(1023-sensorValue)*10/sensorValue;
    Serial.println("the analog read data is ");
    Serial.println(sensorValue);
    Serial.println("the sensor resistance is ");
    Serial.println(Rsensor,DEC);

}
