
int latchPin = 11; // ST_CP [RCK] on 74HC595
int clockPin = 9;  // SH_CP [SCK] on 74HC595
int dataPin = 12;  // DS [S1] on 74HC595

byte leds = 0;

void updateShiftRegister()
{
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, LSBFIRST, leds);
    digitalWrite(latchPin, HIGH);
}

void setup()
{
    pinMode(latchPin, OUTPUT);
    pinMode(dataPin, OUTPUT);
    pinMode(clockPin, OUTPUT);
    updateShiftRegister();
    Serial.begin(9600);
    while (!Serial)
        ;
    // Wait until Serial is ready
    Serial.println("ENter LED Number 0 to 7 or 'x' to clear");
}

void loop()
{
    if (Serial.available())
    {
        char ch = Serial.read();
        if (ch >= '0' && ch <= '7')
        {
            int led = ch - '0';
            bitSet(leds, led);
            updateShiftRegister();
            Serial.print("Turned on LED ");
            Serial.println(led);
        }
        if (ch == 'x')
        {
            leds = 0;
            updateShiftRegister();
            Serial.println("Cleared");
        }
    }
}
