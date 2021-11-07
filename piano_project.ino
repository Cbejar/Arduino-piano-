#define C 2
#define D 3
#define E 4
#define F 5
#define G 6
#define A 7
#define B 9


void setup () {
  pinMode(C, INPUT_PULLUP);
  pinMode(D, INPUT_PULLUP);
  pinMode(E, INPUT_PULLUP);
  pinMode(F, INPUT_PULLUP);
  pinMode(G, INPUT_PULLUP);
  pinMode(A, INPUT_PULLUP);
  pinMode(B, INPUT_PULLUP);
  pinMode(8, OUTPUT);
}


void loop() {
  if(digitalRead(C)==0){
    tone(8, 260, 50); 
 }
 else if(digitalRead(D)==0){
    tone(8, 294, 50); 
 }
  else if(digitalRead(E)==0){
    tone(8, 330, 50); 
 }
 else if(digitalRead(F)==0){
    tone(8, 349, 50); 
 }
 else if(digitalRead(G)==0){
    tone(8, 392, 50); 
 }
  else if(digitalRead(A)==0){
    tone(8, 440, 50); 
 }
 else if(digitalRead(B)==0){
    tone(8, 494, 50); 
 }


}

    
  
  
  
