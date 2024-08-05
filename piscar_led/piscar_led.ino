//Progama que envia sinal alto para saida 7,
//aguarde 1 segundo e repita novamente
void setup() {
  //
  pinMode (7,OUTPUT);

}
//definir a parte código que se repete
void loop() {
 //envia sinal alto
 digitalWrite (7, HIGH);
 delay (2000);
 //envia sinal baixo
 digitalWrite (7, LOW);
 delay (1000);
}
