int Rain_Plug = A0; // plugging
int value = 0  // Initial value

    void
    setup()
{
    pinMode(Rain_Plug, INPUT);
    Serial.begin(9600);
}

void loop()
{
    value = analogRead(Rain_Plug);
    Serial.println(value);
  delay(2000;

  if(value > 200){
        Serial.println("Rain_Plug Detected");
  }
  else{
        Serial.println("Its a Sunny day")
  }
}
