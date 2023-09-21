void drawStartScreen () {
  myGLCD.setBackColor(0, 0, 0);
  myGLCD.setColor(0, 247, 0);
  myGLCD.setFont(Arial_round_16x24);
  myGLCD.print("CALIBRANDO BASCULA", CENTER, 90);
  myGLCD.print("ESPERE POR FAVOR", CENTER, 130);
  myGLCD.print("V3 ARD-SCR", CENTER, 200);
  delay(1000);
  digitalWrite(tolva, LOW);
  delay(2000);
  digitalWrite(tolva, HIGH);
  delay (3000);
  bascula.read();
  bascula.set_scale(memoria);//409.3 //408.745
  bascula.tare(20);
  myGLCD.clrScr();
  myGLCD.print("CALIBRACION", CENTER, 90);
  myGLCD.print("TERMINADA", CENTER, 130);
  delay (2000);
}
