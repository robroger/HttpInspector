/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: rober
 *
 * Created on 12 de Novembro de 2019, 23:54
 */

#include <windows.h>
#include <QApplication>
#include "inspectorWindow.h"

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);

    // create and show your widgets here
    
    inspectorWindow window;
    window.show();

    return app.exec();
}
