#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle("Button Example");

    m_startButton = new QPushButton("Start", this);
    m_startButton->move(50, 50);
    connect(m_startButton, &QPushButton::clicked, this, &MainWindow::onStartButtonClicked);

    m_stopButton = new QPushButton("Stop", this);
    m_stopButton->move(150, 50);
    connect(m_stopButton, &QPushButton::clicked, this, &MainWindow::onStopButtonClicked);

    m_pauseButton = new QPushButton("Pause", this);
    m_pauseButton->move(250, 50);
    connect(m_pauseButton, &QPushButton::clicked, this, &MainWindow::onPauseButtonClicked);

    m_label = new QLabel("Hello World!", this);
    m_label->setGeometry(50, 100, 200, 50);
}

MainWindow::~MainWindow()
{
}

void MainWindow::onStartButtonClicked()
{
    m_label->setText("Started");
}

void MainWindow::onStopButtonClicked()
{
    m_label->setText("Stopped");
}

void MainWindow::onPauseButtonClicked()
{
    m_label->setText("Paused");
}
