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

#include <QObject>
#include <QPixmap>

class UserInfo : public QObject
{
    Q_OBJECT

public:
    explicit UserInfo(QObject *parent = nullptr);

    QString name() const {return username;}

    QString inAudioGroupLabel()     const {return inAudioGrpLabel;}
    QString inRealtimeGroupLabel()  const {return inRealtimeGrpLabel;}
    QPixmap inAudioGroupPixmap()    const {return inAudioGrpPixmap;}
    QPixmap inRealtimeGroupPixmap() const {return inRealtimeGrpPixmap;}

private:
    void checkInGroup(const QString &group);

    QString username;
    QString inAudioGrpLabel;
    QString inRealtimeGrpLabel;
    QPixmap inAudioGrpPixmap;
    QPixmap inRealtimeGrpPixmap;
};
