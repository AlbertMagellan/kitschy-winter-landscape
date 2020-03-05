int LEDblau=3;
int LEDrot=5;
int LEDgruen = 6;
int p=250;//P ist die Pausendauer von 0,25 Sekunden
int brightness1a=150; //Brightness definiert die Helligkeit, mit der die RGB Led leuchten soll.
int brightness1b=150;
int brightness1c=150;
int dunkel=0; //Mit dunkel ist eine Induktionsspannung von 0V festgelegt, sodass die RGB nicht mehr leuchtet.
int randNumber; //hier wird ein Zufallsgenerator integriert
int y=250; //y hat die gleiche Bedeutung wie P


void setup()
{
pinMode (LEDblau, OUTPUT);//hier wird festgelegt, dass die Anschlüsse Outputs sind
pinMode (LEDgruen, OUTPUT);
pinMode (LEDrot, OUTPUT);
randomSeed(analogRead(0));
}

void loop()
{
    randNumber=random(4);
  delay (p);
  if(randNumber<2){
    analogWrite(LEDgruen, brightness1a);
    delay (y);
    analogWrite(LEDgruen, dunkel);
      }
  if(randNumber=2){
    analogWrite(LEDrot, brightness1a);
    delay(y);
    analogWrite(LEDrot, dunkel);
  }
  if(randNumber=3){
    analogWrite(LEDrot, brightness1a);
    analogWrite(LEDgruen, brightness1a);
    analogWrite(LEDblau,brightness1a);
    delay(y);
    analogWrite(LEDrot, dunkel);
    analogWrite(LEDgruen, dunkel);
    analogWrite(LEDblau, dunkel);
      }
    if(randNumber=4){
      analogWrite(LEDrot, brightness1a);
      analogWrite(LEDgruen, brightness1a);
      delay(y);
      analogWrite(LEDrot, dunkel);
      analogWrite(LEDgruen, dunkel);
    }
  }
