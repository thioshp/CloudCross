/*
    CloudCross: Opensource program for syncronization of local files and folders with Google Drive

    Copyright (C) 2016  Vladimir Kamensky
    Copyright (C) 2016  Master Soft LLC.

    This program is free software; you can redistribute it and/or
    modify it under the terms of the GNU General Public License
    as published by the Free Software Foundation version 2
    of the License.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/

#ifndef MSREMOTEFSOBJECT_H
#define MSREMOTEFSOBJECT_H
#include <QTime>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonValue>

class MSRemoteFSObject
{
public:
    MSRemoteFSObject();

    enum Type{
               none=0,
               file=1,
               folder=2
             };

    bool exist;
    Type objectType;

    qint64 modifiedDate;

    QString md5Hash;

    int fileSize;

    QJsonObject data;

};

#endif // MSREMOTEFSOBJECT_H
