class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {
        //using ss for easy extraction of elements    
        stringstream ss1(num1), ss2(num2);

        //variables to be used in extraction
        int real1, imaginary1, real2, imaginary2;
        char sign;

        //extraction
        ss1 >> real1 >> sign >> imaginary1;

        //extraction 2 lol
        ss2 >> real2 >> sign >> imaginary2;

    //storing values to be used in complex number ,multiplication formula
        int realPart = (real1 * real2) - (imaginary1 * imaginary2);
        int imaginaryPart = (real1 * imaginary2) + (real2 * imaginary1);

        //storing result again in ss in desired format 
        stringstream result;
        result << realPart << "+" << imaginaryPart << "i";

        //retrieving the string from ss using str function
        return result.str();
    }
};