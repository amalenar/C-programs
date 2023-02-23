
import java.util.Scanner;


public class PrimeNumber{
    public static void main(String args[]){
        int number,flag=0;
        Scanner sc = new Scanner(System.in);
        System.out.println(" ");
        number = sc.nextInt();

        for(int i=2; i<number; i++){

            if( number%i==0 ){
                flag++;
                
             }
           
        }
                if(flag>=1){
                        System.out.println("Not prime number");
                }
                else{
                    System.out.println(" prime number");
                }
    }
}