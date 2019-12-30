/*  (de)
     Overlay               LED Nr
 F Ü N F Z E H N      0 1 2 3 4 5 6 7
 V O R N A C H *      8 910 1 2 3 4 5
 H A L B V I E R     16 7 8 920 1 2 3
 E I N S E C H S     24 5 6 7 8 930 1
 S I E Z W Ö L F     32 3 4 5 6 7 8 9
 B E N D R E I Ü     40 1 2 3 4 5 6 7
 A Z E H N E U N     48 950 1 2 3 4 5
 A C H T N E L F     56 7 8 960 1 2 3

 Funktionen um die vorgegeben Worte einfacher anzusteuern
 ToDo: Variable für Farbe einfügen
 */

void smile(void) { // =) in blau
  pixels.setPixelColor(2, pixels.Color(0, 0, 10));    // |
  pixels.setPixelColor(10, pixels.Color(0, 0, 10));   // |
  pixels.setPixelColor(18, pixels.Color(0, 0, 10));   // |
  pixels.setPixelColor(5, pixels.Color(0, 0, 10));    // |
  pixels.setPixelColor(13, pixels.Color(0, 0, 10));   // |
  pixels.setPixelColor(21, pixels.Color(0, 0, 10));   // |
  pixels.setPixelColor(32, pixels.Color(0, 0, 10));   // )
  pixels.setPixelColor(41, pixels.Color(0, 0, 10));   // )
  pixels.setPixelColor(50, pixels.Color(0, 0, 10));   // )
  pixels.setPixelColor(51, pixels.Color(0, 0, 10));   // )
  pixels.setPixelColor(52, pixels.Color(0, 0, 10));   // )
  pixels.setPixelColor(53, pixels.Color(0, 0, 10));   // )
  pixels.setPixelColor(46, pixels.Color(0, 0, 10));   // )
  pixels.setPixelColor(39, pixels.Color(0, 0, 10));   // )
}

void fuenfminuten(void) { // Fünf in blau
  pixels.setPixelColor(0, pixels.Color(0, 0, 10));
  pixels.setPixelColor(1, pixels.Color(0, 0, 10));
  pixels.setPixelColor(2, pixels.Color(0, 0, 10));
  pixels.setPixelColor(3, pixels.Color(0, 0, 10));
}

void zehnminuten(void) { // Zehn in blau
  pixels.setPixelColor(4, pixels.Color(0, 0, 10));
  pixels.setPixelColor(5, pixels.Color(0, 0, 10));
  pixels.setPixelColor(6, pixels.Color(0, 0, 10));
  pixels.setPixelColor(7, pixels.Color(0, 0, 10));
}

void viertel(void) { // Fünfzehn in blau
  pixels.setPixelColor(0, pixels.Color(0, 0, 10));
  pixels.setPixelColor(1, pixels.Color(0, 0, 10));
  pixels.setPixelColor(2, pixels.Color(0, 0, 10));
  pixels.setPixelColor(3, pixels.Color(0, 0, 10));
  pixels.setPixelColor(4, pixels.Color(0, 0, 10));
  pixels.setPixelColor(5, pixels.Color(0, 0, 10));
  pixels.setPixelColor(6, pixels.Color(0, 0, 10));
  pixels.setPixelColor(7, pixels.Color(0, 0, 10));
}

void nach(void) { // nach in türkis
  pixels.setPixelColor(11, pixels.Color(0, 5, 5));
  pixels.setPixelColor(12, pixels.Color(0, 5, 5));
  pixels.setPixelColor(13, pixels.Color(0, 5, 5));
  pixels.setPixelColor(14, pixels.Color(0, 5, 5));
}

void vor(void){ // vor in türkis
  pixels.setPixelColor(8, pixels.Color(0, 5, 5));
  pixels.setPixelColor(9, pixels.Color(0, 5, 5));
  pixels.setPixelColor(10, pixels.Color(0, 5, 5));
}

void halb(void) { // halb in türkis
  pixels.setPixelColor(16, pixels.Color(0, 5, 5));
  pixels.setPixelColor(17, pixels.Color(0, 5, 5));
  pixels.setPixelColor(18, pixels.Color(0, 5, 5));
  pixels.setPixelColor(19, pixels.Color(0, 5, 5));
}

void eins(void) { // eins in grün
  pixels.setPixelColor(24, pixels.Color(0, 10, 0));
  pixels.setPixelColor(25, pixels.Color(0, 10, 0));
  pixels.setPixelColor(26, pixels.Color(0, 10, 0));
  pixels.setPixelColor(27, pixels.Color(0, 10, 0));
}

void zwei(void) { // Zwei in grün
  pixels.setPixelColor(35, pixels.Color(0, 10, 0));
  pixels.setPixelColor(36, pixels.Color(0, 10, 0));
  pixels.setPixelColor(45, pixels.Color(0, 10, 0));
  pixels.setPixelColor(46, pixels.Color(0, 10, 0));
}

void drei(void) { // drei in grün
  pixels.setPixelColor(43, pixels.Color(0, 10, 0));
  pixels.setPixelColor(44, pixels.Color(0, 10, 0));
  pixels.setPixelColor(45, pixels.Color(0, 10, 0));
  pixels.setPixelColor(46, pixels.Color(0, 10, 0));
}

void vier(void) { // vier in grün
 pixels.setPixelColor(20, pixels.Color(0, 10, 0));
 pixels.setPixelColor(21, pixels.Color(0, 10, 0));
 pixels.setPixelColor(22, pixels.Color(0, 10, 0));
 pixels.setPixelColor(23, pixels.Color(0, 10, 0));
}

void fuenf(void) { // Fünf in grün
  pixels.setPixelColor(39, pixels.Color(0, 10, 0));
  pixels.setPixelColor(47, pixels.Color(0, 10, 0));
  pixels.setPixelColor(55, pixels.Color(0, 10, 0));
  pixels.setPixelColor(63, pixels.Color(0, 10, 0));
}

void sechs(void) { // sechs in grün
  pixels.setPixelColor(27, pixels.Color(0, 10, 0));
  pixels.setPixelColor(28, pixels.Color(0, 10, 0));
  pixels.setPixelColor(29, pixels.Color(0, 10, 0));
  pixels.setPixelColor(30, pixels.Color(0, 10, 0));
  pixels.setPixelColor(31, pixels.Color(0, 10, 0));
}

void sieben(void) { // sieben in grün
  pixels.setPixelColor(32, pixels.Color(0, 10, 0));
  pixels.setPixelColor(33, pixels.Color(0, 10, 0));
  pixels.setPixelColor(34, pixels.Color(0, 10, 0));
  pixels.setPixelColor(40, pixels.Color(0, 10, 0));
  pixels.setPixelColor(41, pixels.Color(0, 10, 0));
  pixels.setPixelColor(42, pixels.Color(0, 10, 0));
}

void acht(void) { // acht in grün
  pixels.setPixelColor(56, pixels.Color(0, 10, 0));
  pixels.setPixelColor(57, pixels.Color(0, 10, 0));
  pixels.setPixelColor(58, pixels.Color(0, 10, 0));
  pixels.setPixelColor(59, pixels.Color(0, 10, 0));
}

void neun(void) { // neun in grün
  pixels.setPixelColor(52, pixels.Color(0, 10, 0));
  pixels.setPixelColor(53, pixels.Color(0, 10, 0));
  pixels.setPixelColor(54, pixels.Color(0, 10, 0));
  pixels.setPixelColor(55, pixels.Color(0, 10, 0));
}

void zehn(void) { // zehn in grün
  pixels.setPixelColor(49, pixels.Color(0, 10, 0));
  pixels.setPixelColor(50, pixels.Color(0, 10, 0));
  pixels.setPixelColor(51, pixels.Color(0, 10, 0));
  pixels.setPixelColor(52, pixels.Color(0, 10, 0));
}

void elf(void) { // elf in grün
  pixels.setPixelColor(61, pixels.Color(0, 10, 0));
  pixels.setPixelColor(62, pixels.Color(0, 10, 0));
  pixels.setPixelColor(63, pixels.Color(0, 10, 0));
}

void zwoelf(void) { // zwoelf
  pixels.setPixelColor(35, pixels.Color(0, 10, 0));
  pixels.setPixelColor(36, pixels.Color(0, 10, 0));
  pixels.setPixelColor(37, pixels.Color(0, 10, 0));
  pixels.setPixelColor(38, pixels.Color(0, 10, 0));
  pixels.setPixelColor(39, pixels.Color(0, 10, 0));
}
