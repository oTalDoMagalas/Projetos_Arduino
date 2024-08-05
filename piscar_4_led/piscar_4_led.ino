//semaforo "inteligente"
//define as portas e nomes usadas
#define verm 2
#define amar 3
#define verde 4
#define vermPed 5
#define verdePed 6
#define verm2 9
#define amar2 10
#define verde2 11
#define vermPed2 12
#define verdePed2 13
#define b1 7 //botao 1
#define b2 8 //botao 2

//define uma variavel com valor inteiro
int tempo = 5000;
int tempoPiscante = 250;
int cheque = 0;
int ant = LOW;
int i = 0;

//void setup é a parte que começa o código
void setup(){
  pinMode(verm, OUTPUT);
  pinMode(amar, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(vermPed, OUTPUT);
  pinMode(verdePed, OUTPUT);
  pinMode(verm2, OUTPUT);
  pinMode(amar2, OUTPUT);
  pinMode(verde2, OUTPUT);
  pinMode(vermPed2, OUTPUT);
  pinMode(verdePed2, OUTPUT);
  pinMode(b1, INPUT);
  pinMode(b2, INPUT);
  Serial.begin(9600);
}

//void loop é a parte que faz a repetição do código
void loop(){
  
  //mostrar no monitor serial o valor
  Serial.println(b1);
  Serial.println(b2);
  
  //digitalWrite (definir o sinal de saida, alto ou baixo)
  digitalWrite(verde, HIGH);
  digitalWrite(vermPed, HIGH);
  digitalWrite(verm2, HIGH);
  digitalWrite(verdePed2, HIGH);
  delay(2000);
  
  //if é uma condição de (se tal coisa acontecer)
  if(digitalRead(b1) == 1){//botao 1
    digitalWrite(vermPed, HIGH);
    digitalWrite(verde, LOW);
    digitalWrite(amar, HIGH);
    digitalWrite(verm2, HIGH);
    digitalWrite(verdePed2, HIGH);
    
    //else é o (senão acontecer tal coisa, acontecer isto)
  }else{
    delay(tempo);
  }
  digitalWrite(verde, LOW);
  digitalWrite(vermPed, LOW);//semaforo 1 amarelo
  digitalWrite(amar, HIGH);
  
  //while é para definir a quantidade de repetições
  i = 0;
    while(i < 5){//pedestres 1 piscando vermelho
      digitalWrite(vermPed, HIGH);
      delay(tempoPiscante);
      digitalWrite(vermPed, LOW);
      delay(tempoPiscante);
      i++;
    }
    
    digitalWrite(amar, LOW);
    digitalWrite(verm, HIGH);//semaforo 1 vermelho, pedestres 1 verde
    digitalWrite(verdePed, HIGH);
  
    digitalWrite(verm2, LOW);
    digitalWrite(verde2, HIGH);//semaforo 2 verde, pedestes 2 vermelho
    digitalWrite(vermPed2, HIGH);
  digitalWrite(verdePed2, LOW);
    delay(2000);

  if(digitalRead(b2) == 1){//botao 2
    cheque = 0;
    digitalWrite(vermPed2, HIGH);
    digitalWrite(verde2, LOW);
    digitalWrite(verm, HIGH);
    digitalWrite(amar2, HIGH);
    digitalWrite(verdePed, HIGH);
    
  }else{
    delay(tempo);
  }
  digitalWrite(verde2, LOW);//semaforo 2 amarelo
  digitalWrite(amar2, HIGH);
    
  i = 0;
   while(i < 5){//pedestres 2 piscando vermelho
     digitalWrite(vermPed2, HIGH);
     delay(tempoPiscante);
     digitalWrite(vermPed2, LOW);
     delay(tempoPiscante);
     i++;
   }
    digitalWrite(verm, LOW);
    digitalWrite(amar2, LOW);
    digitalWrite(verdePed, LOW);
  //essa ultima linha so desliga alguns leds por causa que reinicia o loop daqui
}
