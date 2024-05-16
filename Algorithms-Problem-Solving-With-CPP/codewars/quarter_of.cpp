int quarter_of(int month){
  return month <= 6 ? (month <= 3 ? 1 : 2) : (month <= 9 ? 3 : 4);
}