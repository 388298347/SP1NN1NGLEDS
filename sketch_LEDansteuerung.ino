int ledanzahl = 12;
LED leds[ledanzahl];

void setup() {
  for (int i = 0; i < ledanzahl; i ++)
  {
   
      pinMode(i, OUTPUT);
    
    leds[i] = new LED(i);
  }
}

void loop() {
  
  for (int i = 0; i < leds.length
}

class LED()
{
  int pin;
  LED(int pinnum)
  {
    pin = pinnum;
  }
  void an()
  {
    digitalWrite(pin, HIGH);
  }
  void aus()
  {
    digitalWrite(pin, LOW);
  }
  bool emptyfunction() //status abfrage
  {
    if (digitalRead(pin) == HIGH)
    {
      return true;
    }
    return false;
  }
}

