import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Vector;
import java.util.Scanner;


/*
    Brenden Detels
    Sideways sorting


 */
public class sidewaysorting {

    public static void main(String []args){
        Scanner scan = new Scanner(System.in);
        while(true){

            int r, c;
            r = scan.nextInt();
            c = scan.nextInt();
            if(r == 0 && c ==0){
                break;
            }
            String[] words = new String[c];
            scan.nextLine();//endl

            for(int i = 0; i < r; i++){
                String line;
                line = scan.nextLine();

                for(int j = 0; j < c; j++){//for each row take the column and put it into words[column]
                    if(i==0){
                        words[j] = ""; //empty first
                    }
                    words[j]+= line.charAt(j);
                }

            }

            Arrays.sort(words, String.CASE_INSENSITIVE_ORDER);//sort them
            /*
            for(int i = 0; i < words.length; i++){
                System.out.println(words[i]);
            }
            */
            for(int i = 0; i < r; i++){

                for(int j = 0; j < c; j++){
                    System.out.print(words[j].charAt(i));
                }
                System.out.println();
            }
            System.out.println();



        }


    }
}
