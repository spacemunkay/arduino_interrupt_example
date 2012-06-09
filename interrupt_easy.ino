int pin = 13;
int other_pin = 12;
volatile int state = LOW;

void setup()
{
  pinMode(pin, OUTPUT);
  pinMode(other_pin, OUTPUT);
  attachInterrupt(0, changeState, RISING);
}

void loop()
{
  digitalWrite(pin, state);
  digitalWrite(other_pin, !state);
}

void changeState()
{
  state = !state;
  delay(10);
}
