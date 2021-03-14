//made by Aj
 
int led1 = 2 ;
int led2 = 4 ;
int led3 = 5 ;

void setup() {
  
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}


void loop() {
  digitalWrite(led1, HIGH); delay(500); digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH); delay(500); digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);  delay(500); digitalWrite(led3,LOW);            //1 //1
  delay(200);
  digitalWrite(led1, LOW);  delay(500); digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);  delay(500); digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW); delay(500); digitalWrite(led3, HIGH);
  delay(200);

  
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);               //1 //1
  delay(200);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(200);

  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  delay(200);                             //2
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(200);

  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  delay(200);                             //3
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(200);

  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  delay(200);
  digitalWrite(led1, LOW);                 //4
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(200);

  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  delay(200);                              //5
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(200);

  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  delay(200);                           //6
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(200);
  
  digitalWrite(led1, HIGH);   
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  delay(200);                           //2//1
  digitalWrite(led1, LOW);    
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  delay(200); 

  digitalWrite(led1, HIGH);   
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  delay(200);                           //2//2
  digitalWrite(led1, LOW);    
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  delay(200); 

  digitalWrite(led1, HIGH);   
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  delay(200);                           //2//3
  digitalWrite(led1, LOW);    
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  delay(200); 

  digitalWrite(led1, HIGH);   
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  delay(200);                           //2//4
  digitalWrite(led1, LOW);    
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  delay(200); 

  digitalWrite(led1, HIGH);   
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  delay(200);                           //2//5
  digitalWrite(led1, LOW);    
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  delay(200); 

  digitalWrite(led1, HIGH);   
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  delay(200);                           //2//6
  digitalWrite(led1, LOW);    
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  delay(200); 

  digitalWrite(led1, HIGH);   
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  delay(200);                           //2//7
  digitalWrite(led1, LOW);    
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  delay(200); 

  digitalWrite(led1, HIGH);   
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  delay(200);                           //2//8
  digitalWrite(led1, LOW);    
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  delay(200); 

  digitalWrite(led1, HIGH);   
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  delay(200);                           //2//9
  digitalWrite(led1, LOW);    
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  delay(200); 

  digitalWrite(led1, HIGH);   
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  delay(200);                           //2//10
  digitalWrite(led1, LOW);    
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  delay(200); 
                        
  
}
