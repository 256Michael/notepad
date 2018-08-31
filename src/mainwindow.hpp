/*
notepad - Simple text editor with tabs
Copyright (C) 2018  256Michael

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/
#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP
 
#include <QApplication>
#include <QObject>
#include <QMainWindow>
#include <QMenuBar>
#include "filemenu.hpp"
#include "editmenu.hpp"
#include "setsmenu.hpp"
#include "helpmenu.hpp"
#include "tabwidget.hpp"

class MainWindow : public QMainWindow
{
Q_OBJECT
public:
    MainWindow(bool useMenu, bool toolBarEnabled,  QFont *font, QStringList *files = nullptr);
	~MainWindow();
	
private slots:
    void closeEvent(QCloseEvent *event);
    void menu(bool useMenuBar = true);
    void setToolBar(bool useToolBar);
    
private:
	FileMenu *fileMenu = nullptr;
	EditMenu *editMenu;
	SetsMenu *setsMenu;
	HelpMenu *helpMenu;
	QMenuBar *menubar=nullptr;
	TabWidget *tabwidget;
	QToolBar *mainToolBar = nullptr;
};



#endif // MAINWINDOW_HPP
