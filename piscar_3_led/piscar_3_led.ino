// Acende e apaga com botão
int valor;
int anterior = 0;
int estadoBotao = LOW;
void setup() {
  pinMode (9, OUTPUT);
  pinMode (7, INPUT);
}
void loop() {
  valor = digitalRead(7);
  if (valor == HIGH && anterior == LOW){
    estadoBotao =! estadoBotao;
  }
  digitalWrite(9,estadoBotao);
  anterior = valor;
  delay(50);
}
