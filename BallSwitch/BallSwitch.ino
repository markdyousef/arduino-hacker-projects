const int LEDpin = 13; // built in
const int BSpin = 2;

void setup()
{
    pinMode(LEDpin, OUTPUT);
    pinMode(BSpin, INPUT);
    digitalWrite(BSpin, HIGH);
}

void loop()
{
    int digitalVal = digitalRead(BSpin);
    if (HIGH == digitalVal)
    {
        digitalWrite(LEDpin, LOW); // Turn LED off
    }
    else
    {
        digitalWrite(LEDpin, HIGH); // Turn LED on
    }
}