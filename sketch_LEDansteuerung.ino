class LED {
  int pin;
  public:
  LED()
  {
    
  }
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
};
  const int ledanzahl = 12;
  LED leds[ledanzahl] = {LED(13), LED(2), LED(3), LED(4), LED(5), LED(6), LED(7), LED(8), LED(9), LED(10), LED(11), LED(12)};
void setup() {
  for (int i = 2; i < ledanzahl+2; i ++)
  {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < ledanzahl; i++)
  leds[i].an();
  delay(10);
  for (int i = 0; i < ledanzahl; i++)
  leds[i].aus();
  delay(10);
}


