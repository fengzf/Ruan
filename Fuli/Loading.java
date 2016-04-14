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

public class Loading extends JFrame{   //设置登录界面
	private JPanel imagePanel;
	private ImageIcon background;
	    //设置界面宽高
	    int centerX;	                     			
	    int centerY;

	    //初始化菜单栏
		private JMenuBar menu=new JMenuBar();
		private JButton deposit=new JButton("存款");
		private JButton credit=new JButton("贷款");
		private JButton touzi=new JButton("投资");
		private JButton guanyu=new JButton("关于");
		private JButton exit=new JButton("退出程序");

		public Loading()
		{
			setTitle("单/复利计算器");

			//MyPanel mp=new MyPanel();						//图片面板类
			menu.add(deposit);
			menu.add(credit);
			menu.add(touzi);
			menu.add(guanyu);
			menu.add(exit);
			

			//添加图片面板到顶层容器
			//add(mp);                           
			setJMenuBar(menu);
			MyItemListener list=new MyItemListener();  //设置监听器
			deposit.addActionListener(list);
			exit.addActionListener(list);
			credit.addActionListener(list);
			touzi.addActionListener(list);
			guanyu.addActionListener(list);
			setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);     //结束进程
			
			

			centerX=Toolkit.getDefaultToolkit().getScreenSize().width;				
			centerY=Toolkit.getDefaultToolkit().getScreenSize().height;
	
			//x：组件在容器X轴上的起点 y：组件在容器Y轴上的起点 width：组件的长度 height：组件的宽度
			setBounds(centerX/4, centerY/5, centerX/2,centerY/2 );
			setResizable(false);          //改变窗体
			setVisible(true);
			
			background = new ImageIcon("tupian\\beijing.jpg");//背景图片

			JLabel label = new JLabel(background);//把背景图片显示在一个标签里面
			//把标签的大小位置设置为图片刚好填充整个面板
			label.setBounds(0,0,background.getIconWidth(),background.getIconHeight());
			//把内容窗格转化为JPanel，否则不能用方法setOpaque()来使内容窗格透明
			imagePanel = (JPanel)this.getContentPane();
			imagePanel.setOpaque(false);
			//把背景图片添加到分层窗格的最底层作为背景
			this.getLayeredPane().add(label,new Integer(Integer.MIN_VALUE));
			this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
			this.setSize(background.getIconWidth(),background.getIconHeight());
			this.setVisible(true);
			}
		
		private class MyItemListener implements ActionListener//处理事件
		{
			 public void actionPerformed(ActionEvent e){  
			Object bj = e.getSource(); // 获得事件源
			if (bj == deposit) { // 若是鼠标点击开始游戏按钮，则调用Mainclass()函数进入游戏

				new Fuli();
			} else if (bj == exit) // 若是点击结束按钮，则退出登录界面
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
				File f = new File("Sound\\music.wav "); //引号里面的是音乐文件所在的绝对鹿筋
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

