//Tito Hailu

package com.assignment.assignment;

import javax.swing.*;
import java.awt.event.*;
import java.awt.*;
import java.lang.Integer;

public class Assignment {
private String info, info1, info2, info3;
JMenuBar mbar;
JMenu menu, apps, help;
JMenuItem item, item1, item2, item3, item4;
JFrame f;
JPanel p1,p2,p3;
JLabel usernameL,passL, departmentL, yearL, status, status1, header,header1;
JTextField username;
JPasswordField pass;
JComboBox cbo1;
JComboBox cbo2;
JLabel display;
JButton buttonSave, buttonExit, buttonCheck;
public Assignment(){
// Creating Object P1 of JPanel class
        mbar = new JMenuBar();
        menu = new JMenu("Menu");
        apps = new JMenu("Applications");
        help = new JMenu("Help");
        f = new JFrame("Micro Link Information Technology Collage Students Login Form");
        Image icon = Toolkit.getDefaultToolkit().getImage("D:\\Users\\sam Vs ruth\\Documents/micro.jpg");  
        f.setIconImage(icon);
        f.setJMenuBar(mbar);
        item = new JMenuItem("Exit");
	item1 = new JMenuItem("Microlink ITCSLF");
        item2 = new JMenuItem("Upper to Lower");
        item3 = new JMenuItem("Calculator");
        item4 = new JMenuItem("About");
menu.add(item);
apps.add(item1);
apps.add(item2);
apps.add(item3);
help.add(item4);
mbar.add(menu);
mbar.add(apps);
mbar.add(help);



        p1 = new JPanel();
            p1.setLayout(new GridLayout(4, 2));
	p2 = new JPanel();
            FlowLayout layout = new FlowLayout();
            p2.setLayout(layout);
        p3 = new JPanel();
            GridLayout layout1 = new GridLayout(4,1);
            p3.setLayout(layout1);
  
  usernameL = new JLabel("Username: ");
  passL = new JLabel("Password: ");
  departmentL = new JLabel("Department: ");
  yearL = new JLabel("Year: ");
  status = new JLabel("Student Login Form");
  status1 = new JLabel("");
  username = new JTextField();
  pass = new JPasswordField();
 
cbo1 = new JComboBox();
cbo1.addItem("select");
cbo1.addItem("Computer Science");
cbo1.addItem("Accounting");
cbo1.addItem("Computer Engineering");

cbo2 = new JComboBox();
cbo2.addItem("select");
cbo2.addItem("1st year");
cbo2.addItem("2nd year");
cbo2.addItem("3rd year");
cbo2.addItem("4th year");

buttonSave = new JButton("Login");
buttonCheck = new JButton("Check");
buttonExit = new JButton("Exit");

p1.add(usernameL);
p1.add(username);
p1.add(passL);
p1.add(pass);
p1.add(departmentL);
p1.add(cbo1);
p1.add(yearL);
p1.add(cbo2);

p2.add(buttonSave);
p2.add(buttonCheck);
p2.add(buttonExit);
p3.add(status);	
p3.add(status1);	
        
f.add(p1, "North");
f.add(p2, "South");
    p2.setBackground(Color.blue);	
f.add(p3, "Center");
    p3.setBackground(Color.green);


class SelectEvents implements ActionListener{
public void actionPerformed(ActionEvent event){
if(event.getSource() == item2){
UppertoLower ul = new UppertoLower();
}
if(event.getSource() == item3){
Calculator calc = new Calculator();
}
if(event.getSource() == item4){
About abt = new About();
}
if(event.getSource() == item){
int query = JOptionPane.showConfirmDialog(f, "Are you sure?");
if(query == JOptionPane.YES_OPTION){
f.dispose();
}
}
if(event.getSource() == buttonExit){
int query = JOptionPane.showConfirmDialog(f, "Are you sure?");
if(query == JOptionPane.YES_OPTION){
f.dispose();
        }
       }
      }
    }

SelectEvents select = new SelectEvents();
item.addActionListener(select);
item2.addActionListener(select);
item3.addActionListener(select);
item4.addActionListener(select);
buttonExit.addActionListener(select);

class saveAction implements ActionListener{ 
    public void actionPerformed(ActionEvent event){
        info =  username.getText();
        info1 =  pass.getText();
        info2  = cbo1.getSelectedItem().toString();
        info3 =  cbo2.getSelectedItem().toString();
        if(info.equals("") || info1.equals("") || info2.equals("select") || info3.equals("select")){
            status.setText("Please Fill All Fields");
            JOptionPane.showMessageDialog(f,"Fill All Fields");
        }
        else{
            status.setText("Welcome to Micro-link Information Technology College");
            status1.setText("Username = "+info+" Password = "+info1+" Department = "+info2+" Year = "+info3);
            username.setText("");
            pass.setText("");
            JOptionPane.showMessageDialog(f,"Logged In Successfully");
        }
    }
}

saveAction save = new saveAction();
buttonSave.addActionListener(save);

buttonCheck.addActionListener(e->{
    String check =  username.getText();
    String check1 =  pass.getText();
    String check2  = cbo1.getSelectedItem().toString();
    String check3 =  cbo2.getSelectedItem().toString();
    if(check.equals(info) && check1.equals(info1) && check2.equals(info2) && check3.equals(info3)){
        status.setText("You have been login successfuly");
        status1.setText("");
        JOptionPane.showMessageDialog(f,"Welcome!");
    }
    else{
        status1.setText("");
        status.setText("Sorry!!! you have entered incorrect login information");
        JOptionPane.showMessageDialog(f,"incorrect login information");
    }
});

    f.setDefaultCloseOperation(f.EXIT_ON_CLOSE);
    f.setVisible(true);
    f.setResizable(false);
    f.pack();
    f.setSize(700, 250);
}
	// Main Method
	public static void main(String args[])
	{
            Assignment a = new Assignment();
	}
}

class UppertoLower{
JPanel p4, p5;
JTextArea strings, strings1;
JLabel label, label2, label3;
JButton buttonCap, buttonSmall, buttonClear, buttonLength;
UppertoLower(){
JFrame f1;
    f1 = new JFrame("Upper and Lower case convertor");
        p4 = new JPanel();
        GridLayout layout4 = new GridLayout(5,1);
        p4.setLayout(layout4);
        
        p5 = new JPanel();
        GridLayout layout5 = new GridLayout(2,2);
        p5.setLayout(layout5);


label = new JLabel();
label2 = new JLabel();
label3 = new JLabel();
strings = new JTextArea();
strings.setColumns(300); 
strings.setRows(2); 
strings1 = new JTextArea();
strings1.setColumns(100); 
p4.add(strings);
p4.add(strings1);
p4.add(label);
p4.add(label2);
p4.add(label3);

buttonCap = new JButton("To Cap");
buttonSmall = new JButton("To Small");
buttonClear = new JButton("Clear");
buttonLength = new JButton("Length");
p5.add(buttonCap);
p5.add(buttonSmall);
p5.add(buttonClear);
p5.add(buttonLength);
f1.add(p4, "North");
f1.add(p5, "South");

class actionButton implements ActionListener{
public void actionPerformed(ActionEvent event){
if(event.getSource() == buttonCap){
strings1.setText(strings.getText().toUpperCase());
}
if(event.getSource() == buttonSmall){
strings1.setText(strings.getText().toLowerCase());
//label.setText(strings.getText().toLowerCase());
}
if(event.getSource() == buttonClear){
strings.setText("");
strings1.setText("");
label.setText("");
label2.setText("");
label3.setText("");
}
if(event.getSource() == buttonLength){
String characters = strings.getText();
int len = characters.length();
label.setText("No of Character "+len);
int upper = 0;
int lower = 0;
for(int a = 0; a < len; a++){
char lett = characters.charAt(a);
if(Character.isUpperCase(lett)){
upper++;
}
else{
lower++;
}
}
label2.setText("No of Capital "+upper);
label3.setText("No of Small "+lower);
}
}
}
actionButton btn = new actionButton();
buttonCap.addActionListener(btn);
buttonSmall.addActionListener(btn);
buttonClear.addActionListener(btn);
buttonLength.addActionListener(btn);

    f1.setVisible(true);
    f1.setResizable(false);
    f1.pack();
    f1.setSize(400, 300);
}
}


class About{
JFrame f;
About(){
f = new JFrame("About Developer");
JOptionPane.showMessageDialog(f,"Name Tito Hailu \n ID 14,159/19");
}
}

class Calculator{
JFrame f1,f2;
JDialog d1,d2,d3;
JPanel p1,p2,p3;
JButton b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20;;
JTextArea t1,t2;
int temp = 0;
int temp1 = 0;
public Calculator(){
f1 = new JFrame("Standard Calculator");

p1 = new JPanel();
p1.setLayout(new FlowLayout());
f1.add(p1, "North");
p2 = new JPanel();
p2.setLayout(new GridLayout(5,3));
f1.add(p2, "South");

b1 = new JButton("1");
p2.add(b1);
b2 = new JButton("2");
p2.add(b2);
b3 = new JButton("3");
p2.add(b3);
b11 = new JButton("x");
p2.add(b11);
b4 = new JButton("4");
p2.add(b4);
b5 = new JButton("5");
p2.add(b5);
b6 = new JButton("6");
p2.add(b6);
b12 = new JButton("+");
p2.add(b12);
b7 = new JButton("7");
p2.add(b7);
b8 = new JButton("8");
p2.add(b8);
b9 = new JButton("9");
p2.add(b9);
b14 = new JButton("/");
p2.add(b14);
b17 = new JButton(".");
p2.add(b17);
b10 = new JButton("0");
p2.add(b10);
b15 = new JButton("%");
p2.add(b15);
b13 = new JButton("-");
p2.add(b13);
b16 = new JButton("=");
p2.add(b16);
b18 = new JButton("^");
p2.add(b18);

t1 = new JTextArea();
t1.setBackground(Color.white);
t1.setColumns(20);
t1.setRows(3);
p1.add(t1);
//t2 = new JTextField();

class operation implements ActionListener{
public void actionPerformed(ActionEvent e){

if(e.getSource() == b1){
t1.setText("1");
}
if(e.getSource() == b2){
t1.setText("2");
}
if(e.getSource() == b12){
temp = Integer.parseInt(t1.getText());
t1.setText("");
}
if(e.getSource() == b16){
temp1 = Integer.parseInt(t1.getText());
t1.setText("");
int result = temp+temp1;
t1.setText("Answer "+result);
}
}
}
operation op = new operation();
b1.addActionListener(op);
b2.addActionListener(op);
b12.addActionListener(op);
b16.addActionListener(op);

d1 = new JDialog();
d2 = new JDialog();
d3 = new JDialog();

//f1.setDefaultCloseOperation(f1.EXIT_ON_CLOSE);	
f1.setVisible(true);
f1.pack();
f1.setSize(300, 500);
}
}
