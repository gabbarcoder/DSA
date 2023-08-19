class Solution {
public:
    string interpret(string s1){
        
        string s2="";
        
        for(int i=0;i<s1.size();i++){
            if(s1[i]=='G'){
                s2=s2+'G';
            }

           

            if(s1[i]=='(' && s1[i++]==')'){
                s1[i]='o';
                s2=s2+s1[i];
                
            }

            if(s1[i]=='('&& s1[i++]=='a'){
                s2=s2+"al";
                
            }    

        }
        return s2;
     
        
    }
};