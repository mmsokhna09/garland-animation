#include <math.h>
typedef struct{
  int pin;
  int power;
  bool grow;
} led;
float gamma = 2.2;
led red = {11,255,false};
led yellow = {10,170,true};
led green = {9,85,true};
led all_leds[3]={red,yellow,green};
int limit=255; 
int speed=1;
void setup() {
  // put your setup code here, to run once:
  pinMode(red.pin,OUTPUT);
  pinMode(yellow.pin,OUTPUT);
  pinMode(green.pin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<3;i++){
    led actual = all_leds[i];
    if(actual.grow==true){
      all_leds[i].power+=speed;                     

      if(all_leds[i].power==limit){
        all_leds[i].grow=false;
      }
    }
    else{
      all_leds[i].power-=speed;
      if(all_leds[i].power==0){
        all_leds[i].grow=true;
      }
    }
    int visible_power= (int)((float)limit*(pow(((float)all_leds[i].power/limit),gamma)));
    analogWrite(all_leds[i].pin,visible_power);
    
  }  
  delay(5);
}
  
