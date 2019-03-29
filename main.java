import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashMap;
import java.util.Scanner;

/**
 * Brenden Detels
 *
 */

public class main {
    public static void main(String []args){
        Scanner scan = new Scanner(System.in);
        int levels;
        while(scan.hasNext()){
            levels = scan.nextInt();
            scan.nextLine();
            String s;
            s = scan.nextLine();

            for(int i = 0; i < levels; i++) {
                s = s.replace("\\", "\\\\");
                s = s.replace("!", "\\!");
                s = s.replace("\"", "\\\"");
                s = s.replace("#", "\\#");
                s = s.replace("$", "\\$");
                s = s.replace("%", "\\%");
                s = s.replace("'", "\\'");
                s = s.replace("&", "\\&");

                s = s.replace("(", "\\(");
                s = s.replace(")", "\\)");
                s = s.replace("*", "\\*");
                s = s.replace("[", "\\[");
                s = s.replace("]", "\\]");



                //  |, "
                // special characters https://www.oreilly.com/library/view/learning-the-bash/1565923472/ch01s09.html

            }
            System.out.println(s);
        }
    }


}
