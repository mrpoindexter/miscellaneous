

package randomcharacter;

import java.util.Random;
import java.util.Scanner;

public class RandomCharacter {
    
    public static String randomTextGenerator(int size)
    {
        Random R = new Random();
        char characters[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','0','1','2','3','4',
                            '5','6','7','8','9','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
        String Character = "";
        for(int i = 0; i < size; i++)
        {
          int a = R.nextInt(62);
          if(a==0)
          {
              a++;
          }
          else{
              Character += characters[a];
          }
        }
        return Character;
    }

    public static void main(String[] args) {
        Scanner S = new Scanner(System.in);
        
        System.out.print("Enter the limit: ");
        int limit = S.nextInt();
        
        System.out.println(randomTextGenerator(limit));
    }
    
}
