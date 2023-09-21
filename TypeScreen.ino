void drawTypeScreen() {
  //TITULO
  myGLCD.fillScr(9, 28, 120);
  myGLCD.setBackColor(9, 28, 120);
  //myGLCD.setBackColor(0, 0, 0); // Sets the background color of the area where the text will be printed to black
  myGLCD.setColor(255, 255, 255); // Sets color to white
  myGLCD.setFont(Arial_round_16x24); // Sets font to big
  myGLCD.print("SELECCIONAR TIPO", CENTER, 10); // Prints the string on the screen
  myGLCD.setColor(255, 0, 0); // Sets color to red
  myGLCD.drawLine(0, 32, 319, 32); // Draws the red line


  //BOTON ATRAS
  myGLCD.setColor(234, 230, 202);
  myGLCD.fillRoundRect (10, 40, 150, 80);
  myGLCD.setColor(255, 255, 255);
  myGLCD.drawRoundRect (10, 40, 150, 80);
  myGLCD.setColor(0, 0, 0);
  myGLCD.setFont(arial_bold);
  myGLCD.setBackColor(234, 230, 202);
  myGLCD.print("<-", 20, 53);
  myGLCD.setFont(arial_bold);
  myGLCD.print("ATRAS", 55, 53);

  // Boton Reg. Molido
  myGLCD.setColor(050, 127, 067); // Sets green color
  myGLCD.fillRoundRect (35, 90, 285, 130); // Draws filled rounded rectangle
  myGLCD.setColor(255, 255, 255); // Sets color to white
  myGLCD.drawRoundRect (35, 90, 285, 130); // Draws rounded rectangle without a fill, so the overall appearance of the button looks like it has a frame
  myGLCD.setFont(arial_bold); // Sets the font to big
  myGLCD.setBackColor(050, 127, 067); // Sets the background color of the area where the text will be printed to green, same as the button
  myGLCD.print("REGULAR MOLIDO", CENTER, 102); // Prints the string

  // BOTON GRANO
  myGLCD.setColor(050, 127, 067);
  myGLCD.fillRoundRect (35, 140, 285, 180);
  myGLCD.setColor(255, 255, 255);
  myGLCD.drawRoundRect (35, 140, 285, 180);
  myGLCD.setFont(arial_bold);
  myGLCD.setBackColor(050, 127, 067);
  myGLCD.print("GRANO", CENTER, 152);

  // BOTON SABORIZADO
  myGLCD.setColor(050, 127, 067);
  myGLCD.fillRoundRect (35, 190, 285, 230);
  myGLCD.setColor(255, 255, 255);
  myGLCD.drawRoundRect (35, 190, 285, 230);
  myGLCD.setFont(arial_bold);
  myGLCD.setBackColor(050, 127, 067);
  myGLCD.print("SABORIZADO", CENTER, 202);
}


void uno() {
  if (currentPage == 1) {//TYPESCREEN
    bolsas = 0;
    if ((x != 0) && (y != 0)) {

      // BOTON DE REG MOLIDO
      if ((x >= 35) && (x <= 285) && (y >= 107) && (y <= 143)) {
        currentPage = 2;
        pesomin = 40;
        vibmin = 600;//vibmin = 16;
        tipo = 0;
        myGLCD.clrScr();
        drawTrabajoStopScreen();
        x = 0;
        y = 0;
      }

      // BOTON DE GRANO
      if ((x >= 35) && (x <= 285) && (y >= 56) && (y <= 96)) {
        currentPage = 2;
        pesomin = 75;
        vibmin = 900;//vibmin = 7;
        myGLCD.clrScr();
        drawTrabajoStopScreen();
        tipo = 1;
        x = 0;
        y = 0;
      }

      // BOTON DE SABORIZADO
      if ((x >= 35) && (x <= 285) && (y >= 8) && (y <= 43)) {
        currentPage = 2;
        pesomin = 30;
        vibmin = 700;//vibmin = 12;
        tipo = 2;
        myGLCD.clrScr();
        drawTrabajoStopScreen();
        x = 0;
        y = 0;
      }

      //BOTON ATRAS
      if ((x >= 10) && (x <= 150) && (y >= 154) && (y <= 193)) {
        currentPage = 0;
        myGLCD.clrScr();
        drawHomeScreen();
        x = 0;
        y = 0;
      }
    }
  }
}
