/**
 * logestSubStringWRC
 */
import java.util.HashMap;
import java.util.HashSet;
public class logestSubStringWRC {

    public static void find(String words){

        HashSet<String> subStringsAndLen= new HashSet<>();

        int size = words.length();
        for(int i=0 ; i<size;i++){

            for(int j=i+1;j<=size;j++){
                String subString = words.substring(i, j);
                subStringsAndLen.add(subString);
            }
        }
        words.matches(words);

        System.out.println(subStringsAndLen);

    }

    public static void main(String[] args) {
        logestSubStringWRC.find("Ifteekhar");
    }
    
}