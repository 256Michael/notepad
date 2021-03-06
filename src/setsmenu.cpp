/*
notepad - Simple text editor with tabs
Copyright (C) 2018-2019  256Michael

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
#include "setsmenu.hpp"

SetsMenu::SetsMenu(bool menuChecked)
:fontAct(QIcon::fromTheme("font-select-symbolic"), tr("&Font")),
menuAct(tr("&Menu bar"))
{
    setTitle(tr("&Settings"));
        
	addAction(&fontAct);
	
	menuAct.setCheckable(true);
	menuAct.setChecked(menuChecked);
	addAction(&menuAct);
	
	connect(&fontAct, &QAction::triggered, this, &SetsMenu::font);
	connect(&menuAct, &QAction::toggled, this, &SetsMenu::menuChange);
}
SetsMenu::~SetsMenu()
{
}
