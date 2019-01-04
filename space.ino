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
}

void loop()
{
 digitalWrite(astroLed,LOW);
 digitalWrite(marsLed,LOW);
 digitalWrite(issLed,LOW);
}

// These functions automatically show up in IFTTT
int astronaut(String command)
{
  digitalWrite(astroLed,HIGH);
  delay(onTime);
}

int mars(String command)
{
  digitalWrite(marsLed,HIGH);
  delay(onTime);
}

int iss(String command)
{
  digitalWrite(issLed,HIGH);
  delay(onTime);
}
