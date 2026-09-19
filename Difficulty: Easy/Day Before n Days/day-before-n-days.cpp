class Solution {
  public:
    int nthDay(int d, int n) {
        if (d >= n){
            return d - n;
        } else {
            int hasil = n - d - 1;
            hasil = hasil % 7;
            return 6 - hasil;
        }
    }
};