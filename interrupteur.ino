const int pinBouton = 2;
const int pinLed = 4;
boolean ledAllumee = false;


void setup() {
  pinMode(pinBouton, INPUT_PULLUP);
  pinMode(pinLed, OUTPUT);
  digitalWrite(pinLed, HIGH); //On eteint la LED 4
  Serial.begin(9600);
}

void loop() {
  boolean bouton = digitalRead(pinBouton);
  Serial.println(bouton); // Affiche l'etat du bouton
                     //(1 = OFF, 0 = ON)
  
  if(bouton  == 0){ //Si l'on appuie sur le bouton
    if (ledAllumee == false){
      ledAllumee = true;
      digitalWrite(pinLed, LOW);
    }
    else{
      ledAllumee = false;
      digitalWrite(pinLed, HIGH);
    }
  }
  delay(200);


}//void loop
