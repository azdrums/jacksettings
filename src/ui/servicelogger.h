/*
    Copyright (C) 2019 - 2020 Andrea Zanellato <redtid3@gmail.com>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    For a full copy of the GNU General Public License see the LICENSE file
*/
#pragma once

#include <QPlainTextEdit>
#include <QProcess>

class ServiceLogger : public QPlainTextEdit
{
    Q_OBJECT

public:
    ServiceLogger(QString unitName, QWidget *parent = nullptr);
    ~ServiceLogger();

private:
    void contextMenuEvent(QContextMenuEvent *);

    void onAboutToQuit();
    void onClearTriggered();
    void onReadyRead();

    QAction  *actClear;
    QProcess *journalProcess;
};
