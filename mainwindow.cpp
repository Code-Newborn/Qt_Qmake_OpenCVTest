#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <opencv2/opencv.hpp>
#include <QDebug>

using namespace cv;
using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    cv::Mat src = imread("../lena.jpg",1);
    int numfeature =400;
    Ptr<SIFT>detector= SIFT::create(numfeature);
    vector<KeyPoint>keypoints;
    detector->detect(src,keypoints,Mat());

    qDebug() << "所有特征点数：" << keypoints.size(); // 使用printf乱码

    Mat resultImg;
    drawKeypoints(src,keypoints,resultImg,Scalar::all(-1),DrawMatchesFlags::DEFAULT);
    namedWindow( "Display window", WINDOW_AUTOSIZE );
    imshow("Display window",resultImg);
}

MainWindow::~MainWindow()
{
    delete ui;
}

