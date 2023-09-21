void drawRecalibradoScreen() {

  myGLCD.fillScr(255, 255, 255);
  myGLCD.setBackColor(255, 255, 255); // Sets the background color of the area where the text will be printed to black
  myGLCD.setColor(0, 0, 0); // Sets color to white
  myGLCD.setFont(arial_bold); // Sets font to big
  myGLCD.print("RECALIBRACION DE", CENTER, 15);
  myGLCD.print("BASCULA", CENTER, 35);// Prints the string on the screen
  myGLCD.print("COLOCAR LAS 5", CENTER, 80);
  myGLCD.print("PESITAS Y", CENTER, 100);
  myGLCD.print("PRESIONAR OK ", CENTER, 120);

  // BOTON OK
  myGLCD.setColor(VGA_LIME);
  myGLCD.fillRoundRect (180, 194, 300, 229);
  myGLCD.setColor(255, 255, 255);
  myGLCD.drawRoundRect (180, 194, 300, 229);
  myGLCD.setColor(0, 0, 0);
  myGLCD.setFont(arial_bold);
  myGLCD.setBackColor(VGA_LIME);
  myGLCD.print("OK", 220, 203);
}

void cinco() {
  if (currentPage == 5) {
    if ((x != 0) && (y != 0)) {
      if (veces == 0) {
        bascula.read();
        bascula.set_scale(1);
        bascula.tare(20);
        veces = 1;
      }
      if ((x >= 176) && (x <= 297) && (y >= 10) && (y <= 43) ) {
        ok = 1;
        myGLCD.clrScr();
        delay(5000);
        x = 0;
        y = 0;
      }
      if (ok == 1) {
        myGLCD.fillScr(255, 255, 255);
        myGLCD.setBackColor(255, 255, 255); // Sets the background color of the area where the text will be printed to black
        myGLCD.setColor(0, 0, 0); // Sets color to white
        myGLCD.setFont(arial_bold); // Sets font to big
        myGLCD.print("RECALIBRANDO", CENTER, 110);
        delay(8000);
        for (int i = 0; i <= 29; i++) {
          mat[i] = bascula.get_units(10),0;
          Serial.println(mat[i]);
          delay(500);
        }
        for (int i = 0; i <= 29 ; i++) {
          prom = prom + mat[i];
          }
        prom = prom / 30;
        valor = prom / 1000;
        valanza = valor;
        
        EEPROM.put(1, valanza);
        ok = 2;
        Serial.print("promedio:");
        Serial.println(prom);
        Serial.print("valanza:");
        Serial.println(valanza);
        Serial.print("Valor de memoria:  ");
        Serial.println(EEPROM.get(1,f));
      }

      if (ok == 2) {
        myGLCD.clrScr();
        myGLCD.fillScr(255, 255, 255);
        myGLCD.setBackColor(255, 255, 255);
        myGLCD.setColor(0, 0, 0);
        myGLCD.setFont(Arial_round_16x24);
        myGLCD.print("REINICIAR MAQUINA", CENTER, 110);
        myGLCD.print("REINICIAR MAQUINA", CENTER, 110);
        x = 0;
        y = 0;
        ok = 0;
      }
    }
  }
}
