#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <opencv2/opencv.hpp>

using namespace cv;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    cv::Mat image = imread("../lena.jpg",1);
    namedWindow( "Display window", WINDOW_AUTOSIZE );
    imshow( "Display window", image );
}

MainWindow::~MainWindow()
{
    delete ui;
}

