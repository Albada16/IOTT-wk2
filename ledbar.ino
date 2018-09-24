int A[]={33,25,26,27,14,12,13};
int btn;
int C=0;
int V=0;
void setup() {
  for(int i=0;i<=7;i++)
  {
  pinMode(A[i], OUTPUT); 
  }
  
  pinMode( 23 , INPUT);
  digitalWrite( 23 , HIGH);
}

void loop() {
  
  btn = digitalRead(23);
  
//  if(btn == HIGH){
//    digitalWrite(A[V],HIGH);
//    V++;
//    delay(200);
//    }
//        delay(200);
  if(btn==HIGH){
    
    if(C>=0 && C<=6){
      
      digitalWrite(A[V],HIGH);
      
      V++;
      C++;
          delay(200);
      }
    else if(C>6 && C<=13){
      V--;
      digitalWrite(A[V],LOW);
      C++;
          delay(200);
      }
      else if(C>13){
        C=0;
        }
    }
    
   
}
