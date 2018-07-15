//https://www.interviewbit.com/problems/fizzbuzz/

vector<string> Solution::fizzBuzz(int A) {
    vector <string> v; 
    for(int i=1; i<=A; i++){
        if(i%3==0 && i%5!=0){
            v.push_back("Fizz");
        }
        else if(i%3!=0 && i%5==0){
            v.push_back("Buzz");
        }
        else if(i%3==0 && i%5==0){
            v.push_back("FizzBuzz");
        }
        else{
            string str = to_string(i);
            v.push_back(str);
        }
    }
    return v;
}
