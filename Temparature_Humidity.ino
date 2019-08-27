#define DHTPIN 2
#define DHTTYPE DHT11
void setup() {
  

    SERIAL.begin(115200); 
    SERIAL.println("DHTxx test!");
    Wire.begin();
    dht.begin();
}

    



void loop() {
      float temp_hum_val[2] = {0};
    
    if(!dht.readTempAndHumidity(temp_hum_val)){
        SERIAL.print("Humidity: "); 
        SERIAL.print(temp_hum_val[0]);
        SERIAL.print(" %\t");
        SERIAL.print("Temperature: "); 
        SERIAL.print(temp_hum_val[1]);
        SERIAL.println(" *C");
    }
    else{
       SERIAL.println("Failed to get temprature and humidity value.");
    }

   delay(1500);

}
