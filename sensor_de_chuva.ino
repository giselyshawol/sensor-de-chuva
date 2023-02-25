#define SinalA A0
#define SinalD 2


void setup() {
  pinMode(SinalD, INPUT);
  Serial.begin(9600);
  pinMode(10, OUTPUT);

}

void loop() {
  int ValorDigital = digitalRead(SinalD);
  int ValorAnalog = analogRead(SinalA);
  Serial.print("Sinal Digital:");
  Serial.print(ValorDigital);
  Serial.print("Sinal Analogico:");
  Serial.println(ValorAnalog);
  delay(700);

  if(ValorAnalog<700){
    Serial.println("esta chovendo");
    digitalWrite(10, HIGH);}
    else{
      Serial.println("nao esta chovendo");
      digitalWrite(10, LOW);}
      

      Serial.println("");
    
  
}
