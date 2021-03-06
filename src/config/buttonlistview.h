// Copyright 2017 Alejandro Sirgo Rica
//
// This file is part of Flameshot.
//
//     Flameshot is free software: you can redistribute it and/or modify
//     it under the terms of the GNU General Public License as published by
//     the Free Software Foundation, either version 3 of the License, or
//     (at your option) any later version.
//
//     Flameshot is distributed in the hope that it will be useful,
//     but WITHOUT ANY WARRANTY; without even the implied warranty of
//     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//     GNU General Public License for more details.
//
//     You should have received a copy of the GNU General Public License
//     along with Flameshot.  If not, see <http://www.gnu.org/licenses/>.

#ifndef BUTTONLISTVIEW_H
#define BUTTONLISTVIEW_H

#include <QListWidget>

class ButtonListView : public QListWidget {
public:
    ButtonListView(QWidget *parent= 0);

private slots:
    void updateActiveButtons(QListWidgetItem *);
    void reverseItemCheck(QListWidgetItem *);

protected:
    void initButtonList();

private:
    QList<int> m_listButtons;
};

#endif // BUTTONLISTVIEW_H
