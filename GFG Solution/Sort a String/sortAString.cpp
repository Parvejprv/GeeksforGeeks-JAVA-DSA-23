/*  
Link: https://www.geeksforgeeks.org/problems/sort-a-string2943/1

(GFG)


Question : Sort a String 
Description : Given a string, sort it in place such that all the characters are in ascending order.





*/


// Solution: CPP

/*  

string sort(string s){
    // create a vector and filled with 0 initially
    vector<int> alpha(26,0);
    
    // store the count for the number of character present in the string
    for(int i=0; i<s.size(); i++){
        alpha[s[i]-'a']++;
    }
    
    string ans;
    for(int i=0; i<26; i++){
        char ch = 'a' + i;      
        
        while(alpha[i]){
            ans += ch;
            alpha[i]--;
        }
    }
    return ans;
}

*/