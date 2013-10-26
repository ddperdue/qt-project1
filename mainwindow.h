/**
* @file
* @author Luc Renambot
* @version 1.0
* @section LICENSE
*  blah blah
* @section DESCRIPTION
*  blah blah blah
*/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
    class MainWindow;
}

/*! \brief Main class
 *         of my application for project CS340.
 *          contains slots for three buttons
 *          they print "pushbutton", "HELLO", and "WORLD!" when clicked
 *
 *  Inherits for QMainWindow from Qt
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
     /**
      * Constructor for MainWindow
      *
      * @param parent a parent widget, can be null
      */
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    //! on_pushButton_clicked();
    /*!
     * prints "button" when clicked
    */
    void on_pushButton_clicked();

    //! on_pushButton_2_clicked();
    /*!
     * prints "HELLO" when clicked
    */
    void on_pushButton_2_clicked();

    //! on_pushButton_3_clicked();
    /*!
     * prints "WORLD!" when clicked
    */
    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
