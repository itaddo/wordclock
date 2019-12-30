// "Umrechnen" der Uhrzeit in 5-Minuten Schritte, dazu Anpassung an Anzeigeformat 

void displayTime(void) {

if ((dminute > 4) && (dminute < 10)) {
      fuenfminuten();
      nach(); }
  
    if ((dminute > 9) && (dminute < 15)) {
      zehnminuten();
      nach(); }
  
    if ((dminute > 14) && (dminute < 20)) {
      viertel();
      nach(); }
  
    if ((dminute > 19) && (dminute < 25)) {
      zehnminuten();
      vor();
      halb(); }
  
    if ((dminute > 24) && (dminute < 30)) {
      fuenfminuten();
      vor();
      halb(); }
    
    if ((dminute > 29) && (dminute < 35))
      halb();
  
    if ((dminute > 34) && (dminute < 40)) {
      fuenfminuten();
      nach();
      halb(); }
  
    if ((dminute > 39) && (dminute < 45)) {
      zehnminuten();
      nach();
      halb(); } 
  
    if ((dminute > 44) && (dminute < 50)) {
      viertel();
      vor(); }
  
    if ((dminute > 49) && (dminute < 55)) {
      zehnminuten();
      vor(); }
    
    if (dminute > 54) {
      fuenfminuten();
      vor(); }
  
    if ((dminute < 20)) {
      switch (dhour) {
          case 1:
          case 13:
            eins();
            break;
            
          case 2:
          case 14:
            zwei();
            break;
            
          case 3:
          case 15:
            drei();
            break;
            
          case 4:
          case 16:
            vier();
            break;
            
          case 5:
          case 17:
            fuenf();
            break;
            
          case 6:
          case 18:
            sechs();
            break;
            
          case 7:
          case 19:
            sieben();
            break;
            
          case 8:
          case 20:
            acht();
            break;
            
          case 9:
          case 21:
            neun();
            break;
            
          case 10:
          case 22:
            zehn();
            break;
            
          case 11:
          case 23:
            elf();
            break;
            
          case 0:
          case 12:
            zwoelf();
            break; }
    }
    else {
       switch (dhour) {
          case 1:
          case 13:
            zwei();
            break;
            
          case 14:
          case 2:
            drei();
            break;
            
          case 15:
          case 3:
            vier();
            break;
            
          case 4:
          case 16:
            fuenf();
            break;
            
          case 5:
          case 17:
            sechs();
            break;
            
          case 6:
          case 18:
            sieben();
            break;
            
          case 7:
          case 19:
            acht();
            break;
            
          case 8:
          case 20:
            neun();
            break;
            
          case 9:
          case 21:
            zehn();
            break;
            
          case 10:
          case 22:
            elf();
            break;
            
          case 11:
          case 23:
            zwoelf();
            break;
            
          case 0:
          case 12:
            eins();
            break; }
    }
}
