int buzzer = 12;

void setup()
{
    pinMode(buzzer, OUTPUT);
}

void loop()
{
    unsigned char i;
    while (1)
    {
        // output frequency
        for (i = 0; i < 20; i++)
        {
            digitalWrite(buzzer, HIGH);
            delay(1);
            digitalWrite(buzzer, LOW);
            delay(1);
        }
        // output another frequency
        for (i = 0; i < 20; i++)
        {
            digitalWrite(buzzer, HIGH);
            delay(2);
            digitalWrite(buzzer, LOW);
            delay(2);
        }
    }
}