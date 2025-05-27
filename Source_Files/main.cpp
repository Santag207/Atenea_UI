// Copyright (C) 2023 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR BSD-3-Clause

#include "widget.h"

#include <QApplication>
#include <QMessageBox>

int main(int argc, char *argv[]){
    QApplication a(argc, argv);

    Widget w;
    w.resize(1280, 720);
    w.show();

    return a.exec();
}
