int led1=11;
int led=10;
int led2=12;
int pot=A0;
int data;
void setup() {
  pinMode(led,OUTPUT); 
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT); 
  pinMode(pot,INPUT);
}

void loop() {
  data=analogRead(pot); 
  data=data/4;
  analogWrite(led,data); 
  analogWrite(led1,data);
  analogWrite(led2,data);
  for(int i=0; i<data; i+=5){ 
    analogWrite(led,i);
    analogWrite(led1,LOW);
    analogWrite(led2,LOW);
    delay(100);  
  }
  for(int j=0; j<data; j+=5){ 
    analogWrite(led,LOW);
    analogWrite(led1,j);
    analogWrite(led2,LOW);
    delay(100);  
  }
  for(int a=0; a<data; a+=5){ 
    analogWrite(led,LOW);
    analogWrite(led1,LOW);
    analogWrite(led2,a);
    delay(100);  
  } 
}
