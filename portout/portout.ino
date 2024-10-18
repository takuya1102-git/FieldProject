const int swPin = 3;
/** 初期設定の関数 一度だけ実行される */
void setup() {
  Serial.begin(115200);
  pinMode(swPin, INPUT);
}
/** 定期的に実行される関数 頻度はdelay関数で調整 */
void loop(){
  // int val = digitalRead(swPin);
  // Serial.println(val); // PCに結果を送信
  // delay(200);
  if (digitalRead(swPin) == HIGH) 
  {
    int val = digitalRead(swPin);
    Serial.println(val);
    //Look at the serial monitor
    delay(500);
  } else {
    // Serial.println("Not Pushed");
    // delay(500);
  }
}