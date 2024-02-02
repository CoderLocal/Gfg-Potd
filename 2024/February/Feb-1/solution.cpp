//User function template for C++

class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string s) {
        // your code here
        if(s.length()<26){
            return false;
        }
        int tc=0,ch=1;
        for(int i=0;i<s.length();i++){
            if(s[i]>='a' && s[i]<='z'){
                ch = 1<<(s[i]-'a');
                tc=tc|ch;
            }
            else if(s[i]>='A' && s[i]<='Z'){
                ch = 1<<(s[i]-'A');
                tc=tc|ch;
            }
            if((1<<26)-1 == tc){
                return true;
            }
        }
        return (1<<26)-1 == tc;
    }

};
