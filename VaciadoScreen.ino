void drawVaciadoScreen () {

  myGLCD.setBackColor(0, 0, 0);
  myGLCD.setColor(255, 255, 255);
  myGLCD.setFont(Arial_round_16x24);
  myGLCD.print("CAFE LA NEGRITA", CENTER, 5);
  myGLCD.setColor(255, 0, 0);
  myGLCD.drawLine(0, 27, 319, 27);

  myGLCD.setBackColor(0, 0, 0);
  myGLCD.setColor(0, 255, 0);
  myGLCD.setFont(Arial_round_16x24);
  myGLCD.print("VACIANDO", CENTER, 110);
  myGLCD.print("MAQUINA", CENTER, 150);

  //BOTON ATRAS
  myGLCD.setColor(234, 230, 202);
  myGLCD.fillRoundRect (10, 40, 150, 80);
  myGLCD.setColor(0, 0, 0);
  myGLCD.drawRoundRect (10, 40, 150, 80);
  myGLCD.setFont(arial_bold);
  myGLCD.setBackColor(234, 230, 202);
  myGLCD.print("<-", 20, 53);
  myGLCD.setFont(arial_bold);
  myGLCD.print("ATRAS", 55, 53);
}


void cuatro() {

  attachInterrupt(2, ZC_detect, FALLING);
   //Serial.println(ZC);

  if (currentPage == 4) {
    alpha = 3000;//10000
    digitalWrite(tolva, LOW); //abrir tolva

    //BOTON ATRAS
    if ((x >= 10) && (x <= 150) && (y >= 155) && (y <= 195)) {
      currentPage = 0;
      alpha = 10000;//0
      digitalWrite(tolva, HIGH);
      myGLCD.clrScr();
      drawHomeScreen();
      x = 0;
      y = 0;
    }
  }
}
