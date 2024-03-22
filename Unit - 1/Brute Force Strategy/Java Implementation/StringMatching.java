//Program to implement brute-force string matching
public class StringMatching {
    
    private static int stringMatch(String text, String pattern){
        for(int i = 0;  i <= text.length() - pattern.length(); i++){
            int j = 0;
            while(j < pattern.length() && text.charAt(i + j) == pattern.charAt(j)){
                j++;
            }
            if(j == pattern.length()){
                return i;
            }
        }
        return -1;
    }

    public static void main(String[] args) {
        String text = "NOBODY_NOTICED_HIM";
        String pattern = "NOT";
        int index = stringMatch(text, pattern);
        if(index == -1){
            System.out.println("Pattern not found in the text");
        } else {
            System.out.println("Pattern found at index: " + index);
        }
    }
}
