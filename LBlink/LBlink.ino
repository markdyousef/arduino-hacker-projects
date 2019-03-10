// executed whenever board resets
void setup()
{
    pinMode(LED_BUILTIN, OUTPUT);
}

// repeatly loops through executing commands
void loop()
{
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000);
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);
}