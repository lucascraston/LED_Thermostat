#include "DHT.h"

//dht DHT;

#define DHT11PIN A4
#define DHTTYPE DHT11   // DHT 11

DHT dht(DHT11PIN, DHTTYPE);


void setup()


{
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(A0,OUTPUT);
  pinMode(A1,OUTPUT);
  pinMode(A2,OUTPUT);
  pinMode(A3,OUTPUT);
  pinMode(A4 ,INPUT);
  pinMode(A5 ,OUTPUT);
  
  Serial.begin(9600);
  Serial.println(F("DHTxx test!"));

  dht.begin();
 
  
}

void loop()
{
 
  
  float t = dht.readTemperature();
  float h = dht.readHumidity();

  if (t>=17 and t<18)
  {
    digitalWrite(A3,HIGH);
    
  }
  else if (t<17)
  {
    digitalWrite(A3,LOW);

  }
  if (t>=18 and t<19)
  {
    digitalWrite(A3,HIGH);
    digitalWrite(13,HIGH);
  }
  else if (t<18 and t>17)
  {
    digitalWrite(A3,HIGH);
    digitalWrite(13,LOW);
  }
  if (t>=19 and t<20)
  {
    digitalWrite(A3,HIGH);
    digitalWrite(13,HIGH);
    digitalWrite(12,HIGH);
   
  }
  else if (t<19 and t>18)
  {
    digitalWrite(A3,HIGH);
    digitalWrite(13,HIGH);
    digitalWrite(12,LOW);
   
    
   
    
  }
  if (t>=20 and t<21)
  {
    digitalWrite(A3,HIGH);
    digitalWrite(13,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(6,HIGH);
  }
  else if (t<20 and t>19)
  {
    digitalWrite(A3,HIGH);
    digitalWrite(13,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(6,LOW);
    
   
    
  }
   if (t>=21 and t<22)
  {
    digitalWrite(A3,HIGH);
    digitalWrite(13,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(5,HIGH);
  }
  else if (t<21 and t>20)
  {
    digitalWrite(A3,HIGH);
    digitalWrite(13,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(5,LOW);
   
    
  } 
  if (t>=22 and t<23)
  {
    digitalWrite(A3,HIGH);
    digitalWrite(13,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(4,HIGH);
  }
  else if (t<22 and t>21)
  {
    digitalWrite(A3,HIGH);
    digitalWrite(13,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(4,LOW);
    
  } 
  if (t>=23 and t<24)
  {
    digitalWrite(A3,HIGH);
    digitalWrite(13,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(3,HIGH);
  }
  else if (t<23 and t>22)
  {
    digitalWrite(A3,HIGH);
    digitalWrite(13,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(3,LOW);
  } 
  if (t>=24)
  {
    digitalWrite(A3,HIGH);
    digitalWrite(13,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(2,HIGH);
  }
  else if (t<24 and t>23)
  {
    digitalWrite(A3,HIGH);
    digitalWrite(13,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(2,LOW);
  }

 if (h>=35 and h<40)
  {
    digitalWrite(7,HIGH);
    
  }
  else if (h<35)
  {
    digitalWrite(7,LOW);

  }
  if (h>=40 and h<45)
  {
    digitalWrite(7,HIGH);
    digitalWrite(11,HIGH);
  }
  else if (h<40 and h>35)
  {
    digitalWrite(7,HIGH);
    digitalWrite(11,LOW);
  }
  if (h>=45 and h<50)
  {
    digitalWrite(7,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(10,HIGH);
   
  }
  else if (h<45 and h>40)
  {
    digitalWrite(7,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(10,LOW);
   
    
   
    
  }
  if (h>=50 and h<55)
  {
    digitalWrite(7,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(9,HIGH);
  }
  else if (h<50 and h>45)
  {
    digitalWrite(7,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(9,LOW);
    
   
    
  }
   if (h>=55 and h<60)
  {
    digitalWrite(7,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(A0,HIGH);
  }
  else if (h<55 and h>50)
  {
    digitalWrite(7,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(A0,LOW);
   
    
  } 
  if (h>=60 and h<65)
  {
    digitalWrite(7,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(A0,HIGH);
    digitalWrite(A1,HIGH);
  }
  else if (h<60 and h>55)
  {
    digitalWrite(7,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(A0,HIGH);
    digitalWrite(A1,LOW);
    
  } 
  if (h>=65 and h<70)
  {
    digitalWrite(7,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(A0,HIGH);
    digitalWrite(A1,HIGH);
    digitalWrite(A2,HIGH);
  }
  else if (h<65 and h>60)
  {
    digitalWrite(7,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(A0,HIGH);
    digitalWrite(A1,HIGH);
    digitalWrite(A2,LOW);
  } 
  if (h>=70)
  {
    digitalWrite(7,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(A0,HIGH);
    digitalWrite(A1,HIGH);
    digitalWrite(A2,HIGH);
    digitalWrite(A5,HIGH);
  }
  else if (h<70 and h>65)
  {
    digitalWrite(7,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(A0,HIGH);
    digitalWrite(A1,HIGH);
    digitalWrite(A2,HIGH);
    digitalWrite(A5,LOW);
  }


  Serial.println(t);
  Serial.println(h);
  delay(250);
}
