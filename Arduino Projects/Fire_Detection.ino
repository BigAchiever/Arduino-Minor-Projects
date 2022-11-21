int Fire = A0;
int value = 0;

void setup()
{
    pinMode(Fire, INPUT);
    Serial.begin(9600);
}

void loop()
{
    value = analogRead(Fire);
    Serial.println(value);
    delay(200);

    if (value < 1020)
    {
        Serial.println("Fire Detected");
    }
    else
    {
        Serial.println("No Fire Detected");
    }
}
