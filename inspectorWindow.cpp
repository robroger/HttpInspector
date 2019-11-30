/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   inspectorWindow.cpp
 * Author: rober
 *
 * Created on 12 de Novembro de 2019, 23:56
 */

#include "inspectorWindow.h"
#include <iostream>
#include <QMessageBox>

inspectorWindow::inspectorWindow() 
{
    widget.setupUi(this);
    
    widget.requestText->setDisabled(true);
    
    // request/reply buttons
    widget.requestText->setPlainText("teste");
    
    
    connect(widget.requestButton, SIGNAL(clicked()), this, SLOT(readRequest()));
    // connect(ui.replyButton, SIGNAL(clicked()), this, SLOT(parseResponse()));
}

void inspectorWindow::readRequest(){
    widget.requestText->setDisabled(false);
    
    QString request_text = widget.requestText->toPlainText();
    
}

inspectorWindow::~inspectorWindow() {
    
}
