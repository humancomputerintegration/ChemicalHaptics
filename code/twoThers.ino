
// which analog pin to connect
#define THERMISTORPIN A2         
#define THERMISTORPIN1 A3   
#define THERMISTORNOMINAL 10000 
#define TEMPERATURENOMINAL 25
// how many samples to take and average, more takes longer
// but is more 'smooth'
#define NUMSAMPLES 5
// the value of the 'other' resistor
#define SERIESRESISTOR 10000
#define BCOEFFICIENT 3950    
 
int samples[NUMSAMPLES];
int samples1[NUMSAMPLES]; 

void setup(void) {
  Serial.begin(9600);
  // connect AREF to 3.3V and use that as VCC, less noisy!
  analogReference(EXTERNAL);
}
 
void loop(void) {
  uint8_t i;
  float average;
  
  uint8_t j;
  float average1;
  
  // take N samples in a row, with a slight delay
  for (i=0; i< NUMSAMPLES; i++) {
   samples[i] = analogRead(THERMISTORPIN);
   delay(5);
  }
 // take N samples in a row, with a slight delay
  for (j=0; j< NUMSAMPLES; j++) {
   samples1[j] = analogRead(THERMISTORPIN1);
   delay(5);
  }

  
  // average all the samples out
  average = 0;
  for (i=0; i< NUMSAMPLES; i++) {
     average += samples[i];
  } 
  float steinhart;
  float steinhart1;
  average /= NUMSAMPLES;
  average = 1023 / average - 1;
  average = SERIESRESISTOR / average;
  steinhart = average / THERMISTORNOMINAL;
  steinhart = log(steinhart);
  steinhart /= BCOEFFICIENT;
  steinhart += 1.0 / (TEMPERATURENOMINAL + 273.15); 
  // + (1/To)
  steinhart = 1.0 / steinhart;                 
  // Invert
  steinhart -= 273.15;                         
  // convert absolute temp to C
  
  // average all the samples out
  average1 = 0;
  for (j=0; j< NUMSAMPLES; j++) {
     average1 += samples1[j];
  }
  average1 /= NUMSAMPLES;
  average1 = 1023 / average1 - 1;
  average1 = SERIESRESISTOR / average1;
  steinhart1 = average1 / THERMISTORNOMINAL;
  steinhart1 = log(steinhart1);
  steinhart1 /= BCOEFFICIENT;
  steinhart1 += 1.0 / (TEMPERATURENOMINAL + 273.15); 
  // + (1/To)
  steinhart1 = 1.0 / steinhart1;                 
  // Invert
  steinhart1 -= 273.15;                         
  // convert absolute temp to C


  
  // print
//  Serial.print("Thermistor resistance2 "); 
  Serial.print(steinhart);
  Serial.print(", ");
  // print
//  Serial.print("Thermistor resistance1 "); 
  Serial.println(steinhart1);
  
 
//  delay(50);
}
