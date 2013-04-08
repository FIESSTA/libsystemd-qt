/***************************************************************************
 * Copyright (c) 2013 Andrea Scarpino <andrea@archlinux.org>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the
 * Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 ***************************************************************************/

#ifndef SD_SEAT_H
#define SD_SEAT_H

#include <QObject>

#include "QtSystemd-export.h"

namespace Systemd {

class SeatPrivate;

class SDQT_EXPORT Seat : public QObject
{
    Q_OBJECT
    Q_DECLARE_PRIVATE(Seat)

public:
    explicit Seat(const QString &path, QObject *parent = 0);
    Seat(SeatPrivate &seat, QObject *parent = 0);
    virtual ~Seat();

    bool canGraphical() const;

protected:
    SeatPrivate *d_ptr;
};
}

#endif