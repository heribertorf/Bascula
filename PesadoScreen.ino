void drawPesadoScreen() {
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


  //myGLCD.setFont(Arial_round_16x24);
  //myGLCD.print(" gr.", 200, 85);

  //BOTON VIB-
  myGLCD.setColor(21, 239, 229);
  myGLCD.fillRoundRect (20, 120, 120, 170);
  myGLCD.setColor(255, 255, 255);
  myGLCD.drawRoundRect (20, 120, 120, 170);
  myGLCD.setColor(0, 0, 0);
  myGLCD.setFont(Arial_round_16x24);
  myGLCD.setBackColor(21, 239, 229);
  myGLCD.print("VIB+", 35, 135);

  //BOTON VIB+
  myGLCD.setColor(21, 239, 229);
  myGLCD.fillRoundRect (210, 120, 300, 170);
  myGLCD.setColor(255, 255, 255);
  myGLCD.drawRoundRect (210, 120, 300, 170);
  myGLCD.setColor(0, 0, 0);
  myGLCD.setFont(Arial_round_16x24);
  myGLCD.setBackColor(21, 239, 229);
  myGLCD.print("VIB-", 225, 135);

  //BOTON STOP
  myGLCD.setColor(VGA_RED);
  myGLCD.fillRoundRect (20, 185, 120, 230);
  myGLCD.setColor(255, 255, 255);
  myGLCD.drawRoundRect (20, 185, 120, 230);
  myGLCD.setColor(0, 0, 0);
  myGLCD.setFont(BigFont);
  myGLCD.setBackColor(VGA_RED);
  myGLCD.print("STOP", 40, 200);

  //BOLSAS
  myGLCD.setFont(arial_bold);
  myGLCD.setBackColor(9, 28, 120);
  myGLCD.setColor(255, 255, 255);
  myGLCD.print("BOLSAS", 140, 203);
  myGLCD.setFont(arial_bold);
  myGLCD.printNumI(bolsas , 260, 203, 3, '0');
}


void tres() {
  if (currentPage == 3) {//PESADOSCREEN
    proceso();

    myGLCD.setColor(255, 255, 255);
    myGLCD.setFont (Arial_round_16x24);
    myGLCD.setBackColor(9, 28, 120);
    myGLCD.printNumI(vibmin , 135, 135, 2, ' ');

    if ((x != 0) && (y != 0)) {

      // BOTON VIB-
      if ((x >= 20) && (x <= 140) && (y >= 66) && (y <= 113)) {
        vibmin = (vibmin - 50);
        if (vibmin <= 100)
          vibmin = 100;
        //Serial.println(vibmin);
        x = 0;
        y = 0;
      }

      // BOTON VIB+
      if ((x >= 180) && (x <= 300) && (y >= 66) && (y <= 113)) {
        vibmin = (vibmin + 50);
        if (vibmin >= 1400)
          vibmin = 1400;
        //Serial.println(vibmin);
        x = 0;
        y = 0;
      }

      // BOTON STOP
      if ((x >= 20) && (x <= 120) && (y >= 8) && (y <= 50)) {
        currentPage =  2;
        myGLCD.clrScr();
        drawTrabajoStopScreen();
        x = 0;
        y = 0;
      }
    }
  }
}
