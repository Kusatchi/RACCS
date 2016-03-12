#define maX 1018
#define miN 0
int sensorPin = A0;
static double sensorValue;

// At startup, with ambient air as the medium, sensor reading is 1023.

void setup() {
  
  Serial.begin(9600); // set up serial port for 9600 baud (speed)
  delay(500); // wait for display to boot up
}

void loop() {

// Indexing variable
int i = 1;

  for ( i = 1; i < 11; i++)
  {
    sensorValue += analogRead(sensorPin);
    delay(100); 
  }
  //sensorValue = analogRead(sensorPin);
  //delay(2000);
  sensorValue = sensorValue / (i-1);
  sensorValue = (sensorValue / maX) * 100;
  
  Serial.print("Soil Moisture Content Sensor Reading: ");
  Serial.print(sensorValue, DEC);
  Serial.print("\n");
} 
