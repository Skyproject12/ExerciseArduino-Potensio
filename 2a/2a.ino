int led=11; 
int tombol=2;
void setup() {
  pinMode(led, OUTPUT); 
  pinMode(tombol, INPUT);
}

void loop() {
  // default button HIGH
  if(digitalRead(tombol)==LOW){
    digitalWrite(led,HIGH);  
  } 
  else{
    digitalWrite(led,LOW);  
  }  
}
