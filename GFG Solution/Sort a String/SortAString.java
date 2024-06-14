/*  
 * Output:-
 * -------------
 * 
 * 
 * class Solution 
{ 
    String sort(String s) 
    {
        
        int[] alpha = new int[26];
        
        // Traverse the string and store the count of each character
        for(int i=0; i<s.length(); i++){
            alpha[s.charAt(i)-'a']++;
        }
        
        // Construct a sorted string
        char sortedChars[] = new char[s.length()];
        
        for(int i=0; i<26; i++){
            int index = 0;
    
            while(alpha[i] > 0){
                sortedChars[index++] = (char) ('a' + i);;
                alpha[i]--;
            }
        }
        return new String (sortedChars);
        
    }
} 
 * 
 * 
*/