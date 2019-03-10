int LEDPin = 5;
int buttonApin = 9;
int buttonBpin = 8;

byte LEDs = 0;

void setup()
{
    pinMode(LEDPin, OUTPUT);
    // default value for the input is HIGH, unless pulled LOW
    // by the action of pressing the button
    pinMode(buttonApin, INPUT_PULLUP);
    pinMode(buttonBpin, INPUT_PULLUP);
}

void loop()
{
    // if switch is pushed down
    if (digitalRead(buttonApin) == LOW)
    {
        digitalWrite(LEDPin, HIGH);
    }
    if (digitalRead(buttonBpin) == LOW)
    {
        digitalWrite(LEDPin, LOW);
    }
}