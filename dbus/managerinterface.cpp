/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -N -m -i generic-types.h -p managerinterface /home/ndr/projects/libsystemd-qt/dbus/introspection/org.freedesktop.systemd1.Manager.xml
 *
 * qdbusxml2cpp is Copyright (C) 2012 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#include "managerinterface.h"

/*
 * Implementation of interface class OrgFreedesktopSystemd1ManagerInterface
 */

OrgFreedesktopSystemd1ManagerInterface::OrgFreedesktopSystemd1ManagerInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent)
    : QDBusAbstractInterface(service, path, staticInterfaceName(), connection, parent)
{
}

OrgFreedesktopSystemd1ManagerInterface::~OrgFreedesktopSystemd1ManagerInterface()
{
}


#include "managerinterface.moc"