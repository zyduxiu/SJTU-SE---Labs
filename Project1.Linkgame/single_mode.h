#ifndef SINGLE_MODEE_H
#define SINGLE_MODEE_H

#include <QMainWindow>
#include <iostream>
#include <QMainWindow>
#include <QMenuBar>
#include <QFileDialog>
#include <QtWidgets>
#include<stdio.h>
#include<stdlib.h>
#include <QPainter>
#include <QTime>
#include <QTimer>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QSound>
#include "mainwighet.h"
namespace Ui {
class single_modee;
}
const int length=4;//single mode�ĵ�ͼ��С
const int totaltime=20;//single mode����Ϸ��ʱ��
struct point/*�������*/{
    int x;//������
    int y;//������
    int lscore=0;//block������
};
class single_modee : public QMainWindow
{
    Q_OBJECT

public:
    single_modee(QWidget *parent = nullptr);
    ~single_modee();
    void paintEvent(QPaintEvent *event) override;//�滭����
    virtual void keyPressEvent(QKeyEvent *event) override;//keypressevent�Ĳۺ���
    virtual void mousePressEvent(QMouseEvent *ev) override;//mousepressevent�Ĳۺ���
    void up_chooseBlock();
    void down_chooseBlock();
    void left_chooseBlock();
    void right_chooseBlock();
    int player_x=0;//player�ĺ�����
    int player_y=0;//player��������
    point block[(length+2)*(length+2)];//block��һά����
    bool hint_time;//hint�ĵ���ʱʱ��
    bool hint_ending;//��ʾ�Ƿ���hint������
    bool whetherlink(int ax, int ay, int bx, int by);//�ж��Ƿ�����
    bool straightwhetherlink(int ax,int ay,int bx,int by);//�ж��Ƿ�ֱ��
    void eliminate(int ax, int ay, int bx, int by,int i);//��������
    void Dead();//�ж��Ƿ�����
    void delay(int i);//�ӳٺ���
    void link(int ax, int ay, int bx, int by);//���ߺ���
    void straightlink(int ax, int ay, int bx, int by);//��ֱ�ߺ���
    void de_straightlink(int ax,int ay,int bx, int by);
    //void iflink(int fx,int fy,int x,int y);
    int whethercanflash(int x,int y);//�Ƿ����λ�Ƶĺ���
    point* detect(int a,int b);//��������
    void DEAD();
private:
    Ui::single_modee *ui;
    int timee;
    QTimer *_1stimer=new QTimer;
    QTimer *timer=new QTimer;
    bool pause_flag;
    bool flash_flag=0;
    QPixmap user;
    int score=0;
    bool single=false;
    int former_x=0;//former block
    int former_y=0;
    int hint1_x=-1;//hint block
    int hint1_y=-1;
    int hint2_x=-1;
    int hint2_y=-1;
protected:

private slots:
    //void timeend();
    void endGame();
    void showthing();
    void timedecrease();//����ʱ����
    void hint();
    void dehint();
    void plus();
    //void flash();
    void tool_s(int tool);
    void shuffle();
    void deflash();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_clicked();
};

#endif // SINGLE_MODEE_H
