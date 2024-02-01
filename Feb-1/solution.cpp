class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string s) {
        //if the length is les than 26,then it means it is not possible to have all alphabets.So return false.
        if(s.length()<26){
            return false;
        }
        //creating two variables to store current character and occured characters in integers by using bitwise operators.
        int total_ch=0,current_ch=1;
        for(int index=0;index<s.length();index++){
            //if the character is lowercase,then subtract 'a' from it to get the position of the letter in the alphabet.
            if(s[index]>='a' && s[index]<='z'){
                current_ch = 1<<(s[index]-'a');
                //using a variable to set bit at the position of the letter in alphabet
                total_ch=total_ch|current_ch;
            }
            //if the character is lowercase,then subtract 'A' from it to get the position of the letter in the alphabet.
            else if(s[index]>='A' && s[index]<='Z'){
                current_ch = 1<<(s[index]-'A');
                //using a variable to set bit at the position of the letter in alphabet
                total_ch=total_ch|current_ch;
            }
            //checking if all 26 characters are found before end of sring
            if((1<<26)-1 == total_ch){
                return true;
            }
        }
        //if all 26 characters are set then it means it is equal to the 2^26-1
        return (1<<26)-1 == total_ch;
    }

};
