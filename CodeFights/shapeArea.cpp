int shapeArea(int n) {
    int sum1=2*n -1;
    int sum = 2*n - 1;
    for(int i=0; i<sum1; i++){
        if(i%2!=0){
            sum += 2*i;
        }
    }
    return sum;
}
