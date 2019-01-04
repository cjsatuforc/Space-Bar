int astronaut(String command);
int mars(String command);
int iss(String command);

int astroLed = D7;
int marsLed = D6;
int issLed = D5;

int onTime = 2000;

void setup()
{
    // Register the Particle function
    Particle.function("Astro", astronaut);
    Particle.function("Mars", mars);
    Particle.function("ISS", iss);

    pinMode(astroLed,OUTPUT);
    pinMode(marsLed,OUTPUT);
    pinMode(issLed,OUTPUT);

    RGB.control(true);  // Enable the inbuilt RGB LED.

}

void loop()
{
 digitalWrite(astroLed,LOW);
 digitalWrite(marsLed,LOW);
 digitalWrite(issLed,LOW);
 RGB.color(255,255,255);  // RGB = White when no event is triggered.
}

// These functions automatically show up in IFTTT
int astronaut(String command)
{
  digitalWrite(astroLed,HIGH);
  RGB.color(255,255,0); // RGB = Yellowish
  delay(onTime);
}

int mars(String command)
{
  digitalWrite(marsLed,HIGH);
  RGB.color(255,0,0); // RGB = Red
  delay(onTime);
}

int iss(String command)
{
  digitalWrite(issLed,HIGH);
  RGB.color(0,0,255); // RGB = Blue
  delay(onTime);
}
