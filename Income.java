import javax.swing.event.SwingPropertyChangeSupport;

import java.util.Scanner;
public class Income {
    
    public static void main(String[] args) {
        double annualIncome;
        double incomeTax;
        int choice;
        Scanner sc = new Scanner(System.in);
        do{     
            System.out.println("Enter your annual income amount");
        annualIncome = sc.nextInt();
        if(annualIncome<= 250000){
            System.out.println("Income tax amount ="+"No tax");
        }
        else if(annualIncome>250000){
            System.out.println("Income tax amount ="+annualIncome/5 + " rupees.");
        }
        else if(annualIncome>500000){
            System.out.println("Income tax amount ="+annualIncome/20 + " rupees.");
        }
        else if(annualIncome>100000&&annualIncome<=5000000){
            System.out.println("Income tax amount="+annualIncome/30 + " rupees.");
        }
        else{
            System.out.println("Tax for than 30%");
        }
        System.out.println("Do you want to continue?,Enter 1 to continue:");
        choice=sc.nextInt();
    }while(choice ==1);
        
   
    }
}
