#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onStartButtonClicked();
    void onStopButtonClicked();
    void onPauseButtonClicked();

private:
    QPushButton* m_startButton;
    QPushButton* m_stopButton;
    QPushButton* m_pauseButton;
    QLabel* m_label;
};

#endif // MAINWINDOW_H