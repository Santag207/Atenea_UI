// Copyright (C) 2023 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR BSD-3-Clause

#include "widget.h"

#include <QApplication>
#include <QAudioDevice>
#include <QMediaDevices>
#include <QMessageBox>

int main(int argc, char *argv[]){
    QApplication a(argc, argv);

    Widget w;
    w.showFullScreen();
    w.show();

    return a.exec();
}