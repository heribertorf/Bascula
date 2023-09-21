void drawTrabajoStopScreen() {
  // TITULO
  myGLCD.fillScr(9, 28, 120);
  myGLCD.setBackColor(9, 28, 120);
  myGLCD.setColor(255, 255, 255);
  myGLCD.setFont(Arial_round_16x24);

  if (tipo == 0) {
    myGLCD.print("Reg.Molido a ", 20, 20);
    myGLCD.printNumI(xpeso, 240, 20, 3, '0');
    //myGLCD.print(xpeso, 200, 20);
  }
  if (tipo == 1) {
    myGLCD.print("Grano a ", 55, 20);
    myGLCD.printNumI(xpeso, 200, 20, 3, '0');
    //myGLCD.print(xpeso, 200, 20);
  }
  if (tipo == 2) {
    myGLCD.print("Saborizado a ", 30, 20);
    myGLCD.printNumI(xpeso, 240, 20, 3, '0');
    //myGLCD.print(xpeso, 200, 20);
  }

  //BOTON PESO MIN
  myGLCD.setColor(21, 239, 229);
  myGLCD.fillRoundRect (20, 60, 110, 110);
  myGLCD.setColor(255, 255, 255);
  myGLCD.drawRoundRect (20, 60, 110, 110);
  myGLCD.setColor(0, 0, 0);
  myGLCD.setFont(Arial_round_16x24);
  myGLCD.setBackColor(21, 239, 229);
  myGLCD.print("<<<", 40, 75);

  //BOTON PESO MAX
  myGLCD.setColor(21, 239, 229);
  myGLCD.fillRoundRect (210, 60, 300, 110);
  myGLCD.setColor(255, 255, 255);
  myGLCD.drawRoundRect (210, 60, 300, 110);
  myGLCD.setColor(0, 0, 0);
  myGLCD.setFont(Arial_round_16x24);
  myGLCD.setBackColor(21, 239, 229);
  myGLCD.print(">>>", 230, 75);

  //BOTON TARAR
  myGLCD.setColor(21, 239, 229);
  myGLCD.fillRoundRect (20, 120, 140, 170);
  myGLCD.setColor(255, 255, 255);
  myGLCD.drawRoundRect (20, 120, 140, 170);
  myGLCD.setColor(0, 0, 0);
  myGLCD.setFont(Arial_round_16x24);
  myGLCD.setBackColor(21, 239, 229);
  myGLCD.print("TARE", 50, 135);

  //BOTON DUMP
  myGLCD.setColor(21, 239, 229);
  myGLCD.fillRoundRect (180, 120, 300, 170);
  myGLCD.setColor(255, 255, 255);
  myGLCD.drawRoundRect (180, 120, 300, 170);
  myGLCD.setColor(0, 0, 0);
  myGLCD.setFont(Arial_round_16x24);
  myGLCD.setBackColor(21, 239, 229);
  myGLCD.print("DUMP", 210, 135);

  //BOTON ATRAS
  myGLCD.setColor(234, 230, 202);
  myGLCD.fillRoundRect (20, 194, 140, 229);
  myGLCD.setColor(255, 255, 255);
  myGLCD.drawRoundRect (20, 194, 140, 229);
  myGLCD.setColor(0, 0, 0);
  myGLCD.setFont(arial_bold);
  myGLCD.setBackColor(234, 230, 202);
  myGLCD.print("<-", 30, 203);
  myGLCD.setFont(arial_bold);
  myGLCD.print("ATRAS", 50, 203);

  //BOTON START
  myGLCD.setColor(VGA_LIME);
  myGLCD.fillRoundRect (180, 194, 300, 229);
  myGLCD.setColor(255, 255, 255);
  myGLCD.drawRoundRect (180, 194, 300, 229);
  myGLCD.setColor(0, 0, 0);
  myGLCD.setFont(arial_bold);
  myGLCD.setBackColor(VGA_LIME);
  myGLCD.print("START", 198, 203);
}


void dos() {

  if (currentPage == 2) {//TRABAJO_STOP_SCREEN

    alpha = 10000;//0
    digitalWrite(tolva, HIGH);

    myGLCD.setColor(255, 255, 255);
    myGLCD.setFont (Arial_round_16x24);
    myGLCD.setBackColor(9, 28, 120);
    myGLCD.printNumI(pesomin , 145, 75, 2, '0');

    if ((x != 0) && (y != 0)) {

      // BOTON PESOm
      if ((x >= 20) && (x <= 110) && (y >= 125) && (y <= 170) ) {
        pesomin = (pesomin - 5);
        x = 0;
        y = 0;
      }

      // BOTON PESOM
      if ((x >= 210) && (x <= 300) && (y >= 125) && (y <= 170) ) {
        pesomin = (pesomin + 5);
        x = 0;
        y = 0;
      }

      // BOTON TARAR
      if ((x >= 20) && (x <= 140) && (y >= 66) && (y <= 113) ) {
        bascula.tare(20);
      }

      // BOTON DUMP
      if ((x >= 180) && (x <= 300) && (y >= 66) && (y <= 113) ) {
        digitalWrite(tolva, LOW); //abrir tolva
        delay(1000);
        digitalWrite(tolva, HIGH);
      }

      // BOTON START
      if ((x >= 180) && (x <= 300) && (y >= 10) && (y <= 42) ) {
        currentPage = 3;
        myGLCD.clrScr();
        drawPesadoScreen();
        x = 0;
        y = 0;
      }
    }

    // BOTON ATRAS
    if ((x >= 20) && (x <= 140) && (y >= 10) && (y <= 42)) {
      currentPage = 1;
      myGLCD.clrScr();
      drawTypeScreen();
      x = 0;
      y = 0;
    }
  }
}
