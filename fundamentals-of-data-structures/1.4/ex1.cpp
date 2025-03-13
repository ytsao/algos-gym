int DivZero(int a, int b, int c){
  if (a < 0 && b < 0 && c < 0){
    throw 1;
  }
  else if (a == 0 && b == 0 && c == 0){
    throw 2;
  }
  return a + b * c + b / c;
}
