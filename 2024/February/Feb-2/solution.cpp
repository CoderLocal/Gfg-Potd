class Solution{
  public:
    int atoi(string s) {
        int num=0,sign=1,index=0;
        if(s[0]=='-'){
            sign=-1;
            index++;
        }
        for(;index<s.length();index++){
            if('0'<=s[index] && s[index]<='9'){
                num=num*10+(s[index]-'0');
            }
            else{
                return -1;
            }
        }
        return sign*num;

    }
};
