import java.awt.Color;

import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.SwingConstants;
import javax.swing.DefaultButtonModel;
import javax.swing.JButton;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Calculator implements ActionListener{

    boolean isOPeratorClicked=false;
    String oldValue,newValue;
    JFrame jf;
    JLabel displayLabel;
    JButton sevenButton;
    JButton eightButton;
    JButton nineButton;
    JButton sixButton;
    JButton fiveButton;
    JButton fourButton;
    JButton threeButton;
    JButton twoButton;
    JButton oneButton;
    JButton zeroButton;
    JButton eButton;
    JButton dButton;
    JButton plusButton;
    JButton minusButton;
    JButton mulButton;
    JButton divButton;
   public Calculator(){
        jf = new JFrame("Calculator");
        jf.setLayout(null);
        jf.setSize(600,600);
        jf.setLocation(300,150);
        displayLabel=new JLabel();
        displayLabel.setBounds(30,50,540,40);
        displayLabel.setBackground(Color.gray);
        displayLabel.setOpaque(true);
        displayLabel.setHorizontalAlignment(SwingConstants.RIGHT);
        displayLabel.setForeground(Color.white);
        jf.add(displayLabel);

//first Row//
        sevenButton= new JButton("7");
        sevenButton.setBounds(30,130,80,80);
        sevenButton.addActionListener(this);
        jf.add(sevenButton);

        eightButton= new JButton("8");
        eightButton.setBounds(130,130,80,80);
        eightButton.addActionListener(this);
        jf.add(eightButton);

       nineButton= new JButton("9");
        nineButton.setBounds(230,130,80,80);
        nineButton.addActionListener(this);
        jf.add(nineButton);
//second Row//
       sixButton= new JButton("6");
       sixButton.setBounds(30,230,80,80);
       sixButton.addActionListener(this);
       jf.add(sixButton);

       fiveButton= new JButton("5");
       fiveButton.setBounds(130,230,80,80);
       fiveButton.addActionListener(this);
       jf.add(fiveButton);

       fourButton= new JButton("4");
       fourButton.setBounds(230,230,80,80);
       fourButton.addActionListener(this);
       jf.add(fourButton);
//Third Row//
       oneButton= new JButton("1");
       oneButton.setBounds(30,330,80,80);
       oneButton.addActionListener(this);
       jf.add(oneButton);

       twoButton= new JButton("2");
       twoButton.setBounds(130,330,80,80);
       twoButton.addActionListener(this);
       jf.add(twoButton);

       threeButton= new JButton("3");
       threeButton.setBounds(230,330,80,80);
       threeButton.addActionListener(this);
       jf.add(threeButton);
//fourth Row//
       dButton= new JButton(".");
       dButton.setBounds(30,430,80,80);
       dButton.addActionListener(this);
       jf.add(dButton);

       zeroButton= new JButton("0");
       zeroButton.setBounds(130,430,80,80);
       zeroButton.addActionListener(this);
       jf.add(zeroButton);

       eButton= new JButton("=");
       eButton.setBounds(230,430,80,80);
       eButton.addActionListener(this);
       jf.add(eButton);
//fourth column

       plusButton= new JButton("+");
       plusButton.setBounds(330,130,80,80);
       plusButton.addActionListener(this);
       jf.add(plusButton);

       minusButton= new JButton("-");
       minusButton.setBounds(330,230,80,80);
       minusButton.addActionListener(this);
       jf.add(minusButton);
       
       mulButton= new JButton("x");
       mulButton.setBounds(330,330,80,80);
       mulButton.addActionListener(this);
       jf.add(mulButton);

       divButton= new JButton("/");
       divButton.setBounds(330,430,80,80);
       divButton.addActionListener(this);
       jf.add(divButton);


        jf.setVisible(true);
        jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }

    public static void main(String[] args) {
        new Calculator();
    }

    @Override
    public void actionPerformed(ActionEvent e){
        if(e.getSource()==sevenButton){
            if(isOPeratorClicked){
                displayLabel.setText("7");
                isOPeratorClicked = false;
            }else{
                displayLabel.setText(displayLabel.getText()+"7");
            }
           
        }else if(e.getSource()==eightButton){
            if(isOPeratorClicked){
                displayLabel.setText("8");
                isOPeratorClicked = false;
            }else{
                displayLabel.setText(displayLabel.getText()+"8");
            }
        }else if(e.getSource()==nineButton){
            displayLabel.setText(displayLabel.getText()+"9");
        }else if(e.getSource()==sixButton){
            displayLabel.setText(displayLabel.getText()+"6");
        }else if(e.getSource()==fiveButton){
            displayLabel.setText(displayLabel.getText()+"5");
        }else if(e.getSource()==fourButton){
            displayLabel.setText(displayLabel.getText()+"4");
        }else if(e.getSource()==threeButton){
            displayLabel.setText(displayLabel.getText()+"3");
        }else if(e.getSource()==twoButton){
            displayLabel.setText(displayLabel.getText()+"2");
        }else if(e.getSource()==oneButton){
            displayLabel.setText(displayLabel.getText()+"1");
        }else if(e.getSource()==dButton){
            displayLabel.setText(displayLabel.getText()+".");
        }else if(e.getSource()==zeroButton){
            displayLabel.setText(displayLabel.getText()+"0");
        }else if(e.getSource()==eButton){
            newValue = displayLabel.getText();
            float oldValueF = Float.parseFloat(oldValue);
            float newValueF = Float.parseFloat(newValue);
            float sum = oldValueF + newValueF;
            displayLabel.setText(sum+"");
        }else if(e.getSource()==plusButton){
            
            isOPeratorClicked=true;
            oldValue=displayLabel.getText();
        }else if(e.getSource()==mulButton){
            
        }else if(e.getSource()==divButton){
            
        }else if(e.getSource()==minusButton){
           
        }

    }
}