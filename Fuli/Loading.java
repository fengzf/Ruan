package Fuli;


import java.awt.event.*;  
import java.awt.*;   

import javax.swing.*;

import java.io.*; 
import java.applet.Applet; 
import java.applet.AudioClip;
import java.awt.Frame; 
import java.net.MalformedURLException; 
import java.net.URL; 

public class Loading extends JFrame{   //���õ�¼����
	private JPanel imagePanel;
	private ImageIcon background;
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
			
			background = new ImageIcon("tupian\\beijing.jpg");//����ͼƬ

			JLabel label = new JLabel(background);//�ѱ���ͼƬ��ʾ��һ����ǩ����
			//�ѱ�ǩ�Ĵ�Сλ������ΪͼƬ�պ�����������
			label.setBounds(0,0,background.getIconWidth(),background.getIconHeight());
			//�����ݴ���ת��ΪJPanel���������÷���setOpaque()��ʹ���ݴ���͸��
			imagePanel = (JPanel)this.getContentPane();
			imagePanel.setOpaque(false);
			//�ѱ���ͼƬ��ӵ��ֲ㴰�����ײ���Ϊ����
			this.getLayeredPane().add(label,new Integer(Integer.MIN_VALUE));
			this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
			this.setSize(background.getIconWidth(),background.getIconHeight());
			this.setVisible(true);
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

			Loading tbc = new Loading();
			tbc.setVisible(true);
			//new Loading();
			try { 
				URL cb; 
				File f = new File("Sound\\music.wav "); //����������������ļ����ڵľ���¹��
				cb = f.toURL(); 
				AudioClip aau; 
				aau = Applet.newAudioClip(cb); 
				aau.loop();
				Music frame=new Music(); 

				} catch (MalformedURLException e) { 
				e.printStackTrace(); 
				} 

				} 
			

		}

