int addDigits(int num) {
    if(num<10) return num;
    else return 1 + (num - 1) % 9; 
}
