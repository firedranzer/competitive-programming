int adjacentElementsProduct(std::vector<int> inputArray) {
    int mul = inputArray[0]*inputArray[1];
    for (int i=0; i<inputArray.size()-1; i++){
        if(inputArray[i]*inputArray[i+1]>mul){
            mul = inputArray[i]*inputArray[i+1];
        }
    }
    return mul;
}
