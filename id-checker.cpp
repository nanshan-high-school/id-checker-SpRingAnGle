#include <iostream>
using namespace std;
int englishCalculate(char);
int numberCalculate(char);

int main() {
  char idCard[10];
  int total;
  
  cout << "請輸入欲被檢查之身分證\n";
  cin >> idCard;
  cout << idCard;
  
  total = englishCalculate(idCard[0]);
  for (int x = 1; x < 10; x++) {
    total += numberCalculate(idCard[x]);
  }
  
  if (total % 10 == 0) {
    cout << "正確!!";
  } else {
    cout << "錯誤!!";
  }
  
  return 0;
}

int englishCalculate(char idCard[0]) {
  int x;
  switch(idcard[0]) {
    case A:
    case B:
    case C:
    case D:
    case E:
    case F:
    case G:
    case H:
      x = 55;
      break;
    case I:
      x = 39;
      break;
    case J:
    case K:
    case L:
    case M:
    case N:
      x = 56;
      break;
    case O:
      x = 35;
      break;
    case P:
    case Q:
    case R:
    case S:
    case T:
    case U:
    case V:
      x = 57;
      break;
    case W:
      x = 55;
      break;
    case X:
    case Y:
      x = 58;
      break;
    case Z:
      x = 57;
      break;
    default:
      cout << "錯誤!!";
  }
  
  int idcard[0] - x;
}

int numberCalculate(char idcard[x]) {
  int y;
  if (x == 10) {
    y = 1;
  } else {
    y = 10 - x;
  }
  int idcard[x] * y;
}