int Fire_Plug = 13;
int value = 0;
int Buzzer_Plug = 13;

void setup()
{
    pinMode(Fire_Plug, INPUT);
    Serial.begin(9600);
    pinMOde(Buzzer_Plug, OUTPUT);
}

void loop()
{
    value = analogRead(Fire_Plug);
    Serial.println(value);
    delay(200);

    if (value < 35)
    {
        digitalWrite(Buzzer_Plug, LOW);
        delay(100);
    }
    else
    {
        digitalWrite(Buzzer_Plug, High);
        delay(100);
    }
}