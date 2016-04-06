package Fuli;
import java.awt.event.*;  
import java.awt.*;   

import javax.swing.*;


public class Loading extends JFrame   //���õ�¼����
{
	    //���ý�����
	    int centerX;	                     			
	    int centerY;

	    //��ʼ���˵���
		private JMenuBar menu=new JMenuBar();
		private JButton deposit=new JButton("���");
		private JButton credit=new JButton("����");
		private JButton touzi=new JButton("Ͷ��");
		private JButton guanyu=new JButton("����");
		private JButton exit=new JButton("�˳�����");

		public Loading()
		{
			setTitle("��/����������");

			//MyPanel mp=new MyPanel();						//ͼƬ�����
			menu.add(deposit);
			menu.add(credit);
			menu.add(touzi);
			menu.add(guanyu);
			menu.add(exit);
			

			//���ͼƬ��嵽��������
			//add(mp);                           
			setJMenuBar(menu);
			MyItemListener list=new MyItemListener();  //���ü�����
			deposit.addActionListener(list);
			exit.addActionListener(list);
			credit.addActionListener(list);
			touzi.addActionListener(list);
			guanyu.addActionListener(list);
			setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);     //��������
			
			

			centerX=Toolkit.getDefaultToolkit().getScreenSize().width;				
			centerY=Toolkit.getDefaultToolkit().getScreenSize().height;
	
			//x�����������X���ϵ���� y�����������Y���ϵ���� width������ĳ��� height������Ŀ��
			setBounds(centerX/4, centerY/5, centerX/2,centerY/2 );
			setResizable(false);          //�ı䴰��
			setVisible(true);			
		
		}
		private class MyItemListener implements ActionListener//�����¼�
		{
			 public void actionPerformed(ActionEvent e){  
			Object bj = e.getSource(); // ����¼�Դ
			if (bj == deposit) { // �����������ʼ��Ϸ��ť�������Mainclass()����������Ϸ

				new Fuli();
			} else if (bj == exit) // ���ǵ��������ť�����˳���¼����
				System.exit(0);
			else if(bj==credit){
				new Credit();
			}
			else if(bj == touzi){
				new touzi();
			}
			else if (bj == guanyu){
			
			}
		}

	}

		
		
			
		public static void main(String[] args) {

			new Loading();
			
		}
}
