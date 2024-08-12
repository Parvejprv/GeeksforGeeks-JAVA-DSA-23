// package GeeksforGeeks-JAVA-DSA-23.GFG Solution.Longest subtring of a string without repeating any character;







public class LongestSubstringOfAStringWithoutRepeatingCharacter {
  

    static int longestSubstrDistinctChars(String S)
    {
        int n =  S.length();        // length of the string
        
        int longSubstringLenth = 0;        // resultant var
        for(int i = 0; i < n; i++){
            // create an array of boolean type of size 256
            boolean[] visited = new boolean[256];
            for(int j = i; j <n; j++){
                // Check if a character of string is visited i.e. if it is true
                if(visited[S.charAt(j)] == true) {
                    break;
                }
                else {
                    // update the resultant length and mark as visited
                    longSubstringLenth = Math.max(longSubstringLenth, j - i +1);
                    visited[S.charAt(j)] = true;
                }
            }
            
            visited[S.charAt(i)] = false;
        }
        
        return longSubstringLenth;
    }
}








/*  

// CPP Solution :



int longestSubstrDistinctChars (string S)
{
    int n =  S.length();        // length of the string
    
    int longSubstringLenth = 0;        // resultant var
    for(int i = 0; i < n; i++){
        // create an array of boolean type of size 256
        vector<bool> visited (256, 0);
        
        for(int j = i; j <n; j++){
            // Check if a character of string is visited i.e. if it is true
            if(visited[S[j]] == true) {
                break;
            }
            else {
                // update the resultant length and mark as visited
                longSubstringLenth = max(longSubstringLenth, j - i +1);
                visited[S[j]] = true;
            }
        }
        
        visited[S[i]] = false;
    }
    
    return longSubstringLenth;
}

*/












