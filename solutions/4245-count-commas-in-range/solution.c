int countCommas(int n){
    int out = n;

    if (n>999){
        out = n - 999;
    }
    else{
        out = 0;
    }
    return out;
}
