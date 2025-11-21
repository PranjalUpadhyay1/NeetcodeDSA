class Solution {
    public void reverseString(char[] s) {
        for(int I=0; I<s.length/2; I++){
            char temp=s[I];
            s[I]=s[s.length-1-I];
            s[s.length-1-I]=temp;
        }
    }
}