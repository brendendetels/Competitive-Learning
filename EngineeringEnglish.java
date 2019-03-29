import java.io.File;
import java.io.FileNotFoundException;
import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class EngineeringEnglish {

    public static void main(String []args){
        Set<String> setW = new HashSet<>();

        //String[] sentence = new String[20000];
        int i = 0;

            Scanner scan = new Scanner(System.in);
            String word = "";


            while((word = scan.next()) != null){
                //System.out.println(word);
                if(setW.contains(word) == true || setW.contains(word.toLowerCase())){
                    System.out.print(". ");
                }else{
                    setW.add(word);
                    System.out.print(word + " ");
                }
                i++;
            }







    }

}
