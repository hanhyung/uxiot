// 7세그먼트에 표시할 숫자를 배열로 준비해놓습니다. // 0은 끄는 것이고, 1은 켜는 것입니다. byte digits[10][7] =
{
{ 0,0,0,0,0,0,1 }, // 0
{ 1,0,0,1,1,1,1 }, // 1
{ 0,0,1,0,0,1,0 }, // 2
{ 0,0,0,0,1,1,0 }, // 3
{ 1,0,0,1,1,0,0 }, // 4
{ 0,1,0,0,1,0,0 }, // 5
{ 0,1,0,0,0,0,0 }, // 6
{ 0,0,0,1,1,1,1 }, // 7
{ 0,0,0,0,0,0,0 }, // 8
{ 0,0,0,1,1,0,0 } // 9
};
void setup(){
// 2~9번 핀들을 모두 출력 모드로 설정합니다. 
  for(int i=2;i<10;i++){
  pinMode(i, OUTPUT);
  }
  // DP, 바로 점에 해당하는 부분을 켜줍니다. digitalWrite(9, HIGH);
}

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}