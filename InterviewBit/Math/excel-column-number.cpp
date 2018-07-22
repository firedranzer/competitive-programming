//https://www.interviewbit.com/problems/excel-column-number/

/*Explanation - AB->
                'A'->26*0+1
                'B'->26*1+2
                
                ABC->
                'A'->26*0+1
                'B'->26*1+2
                'C'->26*28+3
*/

int Solution::titleToNumber(string A) {
    int result = 0;
    //Traversing the string
    for (const auto& c : A)
    {
        result *= 26;
        result += c  - 'A' + 1;
    }
 
    return result;
}
