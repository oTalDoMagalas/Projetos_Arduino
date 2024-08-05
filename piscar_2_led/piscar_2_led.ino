//led pisca pisca

//define a porta que o led ira ficar ligado
#define led1 2
#define led2 4
//define as variaveis que foram utilizadas
int t1 = 500;
int t2 = 300;

void setup(){
  pinMode (2,OUTPUT);
  pinMode (4,OUTPUT);
}

void loop(){
  digitalWrite(led1, HIGH);
  delay(t1);
  digitalWrite(led1, LOW);
  delay(t2);
  digitalWrite(led2, HIGH);
  delay(t1);
  digitalWrite(led2, LOW);
  delay(t2);
}
