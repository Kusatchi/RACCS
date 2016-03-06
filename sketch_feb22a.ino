
#define ESP8266_GPIO4 4

void setup() 
{
  pinMode(ESP8266_GPIO4, OUTPUT);
}

void loop() 
{
  digitalWrite(ESP8266_GPIO4, LOW);
  delay(3000);
  digitalWrite(ESP8266_GPIO4, HIGH);
  delay(3000);
}

