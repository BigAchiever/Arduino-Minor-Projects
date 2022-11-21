int IRsensor_Plug = A0;
int value = 0;

void setup()
{
    // put your setup code here, to run once:
    pinMode(IRsensor_Plug, INPUT);
    Serial.begin(9600);
}

void loop()
{
    // put your main code here, to run repeatedly:
    value = analogRead(IRsensor_Plug);
    Serial.println(value);
    delay(200);

    if (value < 21)
    {
        Serial.println("Not detected");
    }
    else
    {
        Serial.println("Detected");
    }
}