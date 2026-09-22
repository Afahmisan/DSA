int nthDay(int d, int n) {
    if(d >= n){
        return d - n;
    } else if (d < n){
        int hasil = (n - d -1) % 7;
        return 6 - hasil;
    }
    
}