const int pins[5] = {2,3,4,5,6};
const int leftForward = 9 ;
const int leftBackward = 10 ;
const int rightForward = 11 ;
const int rightBackward = 12 ;

void setup(){
    for(int i = 0 ; i < 5 ; ++i){
        pinMode(pins[i],INPUT);
    }
    pinMode(leftForward,OUTPUT);
    pinMode(leftBackward,OUTPUT);
    pinMode(rightForward,OUTPUT);
    pinMode(rightBackward,OUTPUT);
}

void loop(){
    int sensorValue[5];
    for(int i = 0 ; i < 5 ; ++i){
        sensorValue[i] = digitalRead(pins[i]);
    }

    if(sensorValue[2] == 1){
        straight();
    }else if(sensorValue[1] == 1){
        slightLeft();
    }else if(sensorValue[0] == 1){
        sharpLeft();
    }else if(sensorValue[3] == 1){
        slightRight();
    }else if(sensorValue[4] == 1){
        sharpRight();
    }else{
        stop();
    }    
}

void straight(){
    analogWrite(leftForward,180);
    analogWrite(rightForward,180);
    analogWrite(leftBackward,0);
    analogWrite(rightBackward,0);
    
}

void sharpLeft(){
    analogWrite(leftForward,10);
    analogWrite(rightForward,180);
    analogWrite(leftBackward,0);
    analogWrite(rightBackward,0);
}
void slightLeft(){
    analogWrite(leftForward,110);
    analogWrite(rightForward,180);
    analogWrite(leftBackward,0);
    analogWrite(rightBackward,0);
}
void sharpRight(){
    analogWrite(leftForward,180);
    analogWrite(rightForward,10);
    analogWrite(leftBackward,0);
    analogWrite(rightBackward,0);
}
void slightRight(){
    analogWrite(leftForward,180);
    analogWrite(rightForward,110);
    analogWrite(leftBackward,0);
    analogWrite(rightBackward,0);
}
void stop(){
    analogWrite(leftForward,0);
    analogWrite(rightForward,0);
    analogWrite(leftBackward,0);
    analogWrite(rightBackward,0);
}



