
// Digital/Power MUX Addresing GPIOs
#define ESP8266_GPIO7_DS3   7
#define ESP8266_GPIO15_DS2  15
#define ESP8266_GPIO16_DS1  16
#define ESP8266_GPIO12_DS0  12
#define ESP8266_GPIO8_DSIG  8

// Analog/Signal MUX Addresing GPIOs
#define ESP8266_GPIO13_AS3  13
#define ESP8266_GPIO4_AS2   4
#define ESP8266_GPIO0_AS1   0
#define ESP8266_GPIO5_AS0   5
#define ESP8266_ADC_A0      A0


#define Maximum_ADC_Output 1024   // 2^10 10-Bit ADC Resolution
#define miN 0           
 

void setup() 
{  
  Serial.begin(9600); // set up serial port for 9600 baud (speed)
  delay(500); // wait for display to boot up
}

void 

// This function reads analog sensor values

static double sensorValue
void analog_SensorRead(
  )
  {
    // Variable to Store Sensor Reading
    
  
    
    int j;              // Sensor reading indexing variable
    static double sensorChannels_n = 16 // n-number of MUX channels available
   
    int SMC_n,              // n-number of Soil Moisture Content Sensors
    int ST_n                // n-number of Soil Temperature Sensors

    
    // Read SMC sensors, allocated mux channels [0 - ((SMC_n)-1)]  
    int j = 0;   // Soil Moisture Content Sensor Indexing Varialbe
    for(; j <SMC_n; j++)
    {      
          Serial.print("SMC Sensor : [");
          Serial.print(j);

          // Take an i-number of samples and average the signal
          
          int i;  // Average indexing variable
          for ( i = 0; i < 10; i++)
          {
            sensorValue += analogRead(ESP8266_ADC_A0);
            delay(100); 
          }
          sensorValue = sensorValue / (i);
          Serial.print("\t Averaged Soil Moisture Reading : [");
          Serial.print(sensorVal, DEC);

          sensorValue = (sensorValue / Maximum_ADC_Output) * 100;
          Serial.print("\t Percent Soil Moisture Reading : [");
          Serial.print("\n");
    }  
    }
    }
      // SMC sensors are allocated channels first [0 - ((SMC_n)-1)] 
    // ST sensors are allocated channels second [((SMC_n)-1)-((ST_n)-1)] 

void loop() 
{
  // 
  
  int SMC_count = 4;  // Number of SMC sensors
 
    
    // This for loop cycles through the SMC sensors, and takes an analog reading
    // SMC sensors are powered through [MUX_IO]



  /*
            int i;  // Average indexing variable
            for ( i = 0; i < 10; i++)
            {
              sensorValue += analogRead(ESP8266_ADC_A0);
              delay(100); 
            }
            sensorValue = sensorValue / (i);
          
            
            sensorValue = (sensorValue / maX) * 100;
  */
  Serial.print("Soil Moisture Content Sensor Reading: ");
  Serial.print(sensorValue, DEC);
  Serial.print("\n");
} 
