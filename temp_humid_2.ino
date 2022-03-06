#include "DHT.h"

//dht DHT;

#define DHT11PIN 5
#define DHTTYPE DHT11   // DHT 11

DHT dht(DHT11PIN, DHTTYPE);


void setup()


{
  Serial.begin(9600);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  
  Serial.begin(9600);
  Serial.println(F("DHTxx test!"));

  dht.begin();
 
  
}

void writeToPin(int amount) {
  int numberOfPins = 16;
  for (int i = 0; i < amount; i++) {
    digitalWrite(numberOfPins - i,HIGH);
   } 
 };

void loop()
{
 
  
  float t = dht.readTemperature();
  float h = dht.readHumidity();

  if (t>=17 and t<18)
  {
    digitalWrite(13,HIGH);
    
  }
  else if (t<17)
  {
    writeToPin(1);

  }
  if (t>=18 and t<19)
  {
    digitalWrite(13,HIGH);
    digitalWrite(12,HIGH);
  }
  else if (t<18 and t>17)
  {
    digitalWrite(13,HIGH);
    digitalWrite(12,LOW);
  }
  if (t>=19 and t<20)
  {
    digitalWrite(13,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(11,HIGH);
   
  }
  else if (t<19 and t>18)
  {
    digitalWrite(13,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(11,LOW);
   
    
   
    
  }
  if (t>=20 and t<21)
  {
    digitalWrite(13,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(10,HIGH);
  }
  else if (t<20 and t>19)
  {
    digitalWrite(13,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(10,LOW);
    
   
    
  }
   if (t>=21 and t<22)
  {
    digitalWrite(13,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(9,HIGH);
  }
  else if (t<21 and t>20)
  {
    digitalWrite(13,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(9,LOW);
   
    
  } 
  if (t>=22 and t<23)
  {
    digitalWrite(13,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(8,HIGH);
  }
  else if (t<22 and t>21)
  {
    digitalWrite(13,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(8,LOW);
    
  } 
  if (t>=23 and t<24)
  {
    digitalWrite(13,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(7,HIGH);
  }
  else if (t<23 and t>22)
  {
    digitalWrite(13,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(7,LOW);
  } 
  if (t>=24)
  {
    digitalWrite(13,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(6,HIGH);
  }
  else if (t<24 and t>23)
  {
    digitalWrite(13,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(6,LOW);
  }



  Serial.println(t);
  Serial.println(h);
  delay(250);
}
