#include <UTFT.h>
#include <URTouch.h>
#include <HX711.h>
#include <EEPROM.h> //libreria de la memoria


UTFT    myGLCD(CTE32, 38, 39, 40, 41);//ILI9341_16**CTE32**SSD1289**ITDB32S<--controlador
URTouch  myTouch(6, 5, 4, 3, 2);//==== PINES LCD TOUCH

//==== TAMAÑO Y TIPO DE LETRA Y NUMEROS PARA MOSTRAR
extern uint8_t SmallFont[];
extern uint8_t BigFont[];
extern uint8_t arial_bold[];
extern uint8_t SevenSegNumFont[];
extern uint8_t Arial_round_16x24[];

int x = 0, y = 0;
int currentPage = 0;
int xpeso = 0, peso = 0;
int paso = 0, nproceso = 0;
int pesomin = 0, vibmin = 0, pedal = 0;
int tipo = 0, bolsas = 0;
int tolva = 8, vib = 9, p = 10, cal = 11;
int veces=0,ok=0;//lo va a mandar con unpush
float mat[30];
float valanza=0, prom=0, valor=0, f=0;
float memoria=(EEPROM.get(1,f));//este es el valor guardado


bool ZC = 0;
volatile int alpha = 0;
//#define pot       A2

// HX711.DOUT  - pin #A1
// HX711.PD_SCK - pin #A0

HX711 bascula(A1,A0);

void setup() {

  Serial.begin(9600);
  myGLCD.InitLCD();
  myGLCD.clrScr();
  myTouch.InitTouch();
  myTouch.setPrecision(PREC_MEDIUM);

  pinMode(tolva, OUTPUT);
  pinMode(vib, OUTPUT);
  pinMode(cal,INPUT);
  //digitalWrite(vib, LOW);
  digitalWrite(tolva, HIGH);
  //analogWrite(vib,0);
  alpha = 10000;//0
  pinMode(p, INPUT);
  bascula.read();
  bascula.set_scale(memoria);//409.3//408.745
  bascula.tare(20);
  drawStartScreen();
  myGLCD.clrScr();
  drawHomeScreen();
   //Serial.print("Valor de memoria:  ");
  //Serial.println(memoria);
}

void ZC_detect() {
  ZC = 1;
  if (ZC) {
    delayMicroseconds(alpha);
    digitalWrite(vib, HIGH);
    delay(1);
    digitalWrite(vib, LOW);
    ZC = 0;
    //alpha = analogRead(pot) * 10;
    //if (alpha > 10000)
    //alpha = 10000;
    /*       0 = OFF
         10000 = ON
    */    
     //Serial.println(ZC);                                        
  }
   //Serial.println(ZC);
}

void loop() {
  //if (cal==LOW){

  myTouch.read();
  x = myTouch.getX();
  //Serial.println(x);
  y = myTouch.getY();
  //Serial.println(y);
  pedal = digitalRead (p);
  peso = bascula.get_units(1), 0;

  zero();
  uno();
  dos();
  tres();
  cuatro();
  cinco();
  //}
  //if (cal==HIGH){
  //  programa();
 //   }
}

void proceso() {

  attachInterrupt(2, ZC_detect, FALLING);
  //Serial.println(ZC);
  //Serial.println(alpha);

  if (nproceso == 0) {
    nproceso = 1;
    paso = 1;
  }

  if (paso < 5) {

    myGLCD.setFont(SevenSegNumFont);
    myGLCD.setColor(0, 255, 0);
    myGLCD.setBackColor(9, 28, 120);
    myGLCD.printNumI(peso , 80, 60, 4, '0');
    paso = 2;
  }
  if (paso == 2) {
    alpha = 3000;//10000
  }
  if (peso >= (xpeso - pesomin)) {
    alpha = alpha + vibmin;
    paso = 3;
  }
  if (paso == 3) {
    if (peso >= (xpeso)) {
      alpha = 10000;//0 apagar vibrador
      delay(100);
      paso = 4;
    }
  }
  if (paso == 4) {
    if (pedal == HIGH) {
      digitalWrite(tolva, LOW); //abrir tolva
      delay(1000);
      digitalWrite(tolva, HIGH);
      delay(1000);
      nproceso = 0;
      bolsas++;
      myGLCD.setFont(arial_bold);
      myGLCD.setBackColor(9, 28, 120);
      myGLCD.setColor(255, 255, 255);
      myGLCD.print("BOLSAS", 140, 203);
      myGLCD.setFont(arial_bold);
      myGLCD.printNumI(bolsas , 260, 203, 3, '0');
    }
  }
  delay(10);
}
