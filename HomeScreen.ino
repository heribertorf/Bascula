void drawHomeScreen() {
  // TITULO
  myGLCD.fillScr(9, 28, 120);
  myGLCD.setBackColor(9, 28, 120); // Sets the background color of the area where the text will be printed to black
  myGLCD.setColor(255, 255, 255); // Sets color to white
  myGLCD.setFont(Arial_round_16x24); // Sets font to big
  myGLCD.print("CAFE LA NEGRITA", CENTER, 5); // Prints the string on the screen
  myGLCD.setColor(255, 0, 0); // Sets color to red
  myGLCD.drawLine(0, 27, 319, 27); // Draws the red line
  myGLCD.setColor(255, 255, 255);
  myGLCD.setFont(SmallFont);
  myGLCD.print("Powered by Tu tio millo", CENTER, 227);

  // BOTON VACIADO
  myGLCD.setColor(255, 255, 0);
  myGLCD.fillRoundRect (85, 30, 230, 65);
  myGLCD.setColor(255, 255, 255);
  myGLCD.drawRoundRect (85, 30, 230, 65);
  myGLCD.setColor(0, 0, 0);
  myGLCD.setFont(Arial_round_16x24);
  myGLCD.setBackColor(255, 255, 0);
  myGLCD.print("VACIADO", CENTER, 37);

  // BOTON 227g
  myGLCD.setColor(255, 164, 032);
  myGLCD.fillRoundRect (10, 70, 150, 145); // Draws filled rounded rectangle
  myGLCD.setColor(255, 255, 255); // Sets color to white
  myGLCD.drawRoundRect (10, 70, 150, 145); // Draws rounded rectangle without a fill, so the overall appearance of the button looks like it has a frame
  myGLCD.setColor(0, 0, 0); // Sets color to white
  myGLCD.setFont(Arial_round_16x24); // Sets the font to big
  myGLCD.setBackColor(255, 164, 032); // Sets the background color of the area where the text will be printed to green, same as the button
  myGLCD.print("227g", 50, 95); // Prints the string

  // BBOTON 250g
  myGLCD.setColor(255, 164, 032);
  myGLCD.fillRoundRect (170, 70, 310, 145);
  myGLCD.setColor(255, 255, 255);
  myGLCD.drawRoundRect (170, 70, 310, 145);
  myGLCD.setColor(0, 0, 0);
  myGLCD.setFont(Arial_round_16x24);
  myGLCD.setBackColor(255, 164, 032);
  myGLCD.print("250g", 210, 95);

  // BOTON 500g
  myGLCD.setColor(255, 164, 032);
  myGLCD.fillRoundRect (10, 150, 150, 226);
  myGLCD.setColor(255, 255, 255);
  myGLCD.drawRoundRect (10, 150, 150, 226);
  myGLCD.setColor(0, 0, 0);
  myGLCD.setFont(Arial_round_16x24);
  myGLCD.setBackColor(255, 164, 032);
  myGLCD.print("500g", 50, 175);

  // BOTON 1000g
  myGLCD.setColor(255, 164, 032);
  myGLCD.fillRoundRect (170, 150, 310, 226);
  myGLCD.setColor(255, 255, 255);
  myGLCD.drawRoundRect (170, 150, 310, 226);
  myGLCD.setColor(0, 0, 0);
  myGLCD.setFont(Arial_round_16x24);
  myGLCD.setBackColor(255, 164, 032);
  myGLCD.print("1Kg", 220, 175);
}


void zero() {
  //alpha = 0;

  if (currentPage == 0) {//HOMESCREEN
    if ((x != 0) && (y != 0)) {

      // BOTON DE VACIADO
      if ((x >= 85) && (x <= 230) && (y >= 170) && (y <= 204)) {
        currentPage = 4;
        myGLCD.clrScr();
        drawVaciadoScreen();
        x = 0;
        y = 0;
      }

      // BOTON DE RECALIBRADOO
      if ((x >= 290) && (x <= 318) && (y >= 200) && (y <= 230)) {
        currentPage = 5;
        myGLCD.clrScr();
        drawRecalibradoScreen();
        //programa();
        x = 0;
        y = 0;
      }

      // BOTON DE 227g
      if ((x >= 10) && (x <= 150) && (y >= 90) && (y <= 165)) {
        currentPage = 1;
        xpeso = 227;
        myGLCD.clrScr();
        drawTypeScreen();
        x = 0;
        y = 0;
      }

      // BOTON DE 250g
      if ((x >= 170) && (x <= 310) && (y >= 90) && (y <= 165)) {
        currentPage = 1;
        xpeso = 250;
        myGLCD.clrScr();
        drawTypeScreen();
        x = 0;
        y = 0;
      }

      // BOTON DE 500g
      if ((x >= 10) && (x <= 150) && (y >= 10) && (y <= 85)) {
        currentPage = 1;
        xpeso = 500;
        myGLCD.clrScr();
        drawTypeScreen();
        x = 0;
        y = 0;
      }

      // BOTON DE 1Kg
      if ((x >= 170) && (x <= 310) && (y >= 10) && (y <= 85)) {
        currentPage = 1;
        xpeso = 1000;
        myGLCD.clrScr();
        drawTypeScreen();
        x = 0;
        y = 0;
      }
    }
  }
}
