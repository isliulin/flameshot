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

#ifndef CONFIGURATION_H
#define CONFIGURATION_H

#include <QWidget>

class QVBoxLayout;

class QListWidgetItem;
class QListWidget;

class ConfigWindow : public QWidget {
    Q_OBJECT
public:
    explicit ConfigWindow(QWidget *parent = 0);

protected:
    void keyPressEvent(QKeyEvent *);

private:
    QVBoxLayout *m_layout;



};

#endif // CONFIGURATION_H
