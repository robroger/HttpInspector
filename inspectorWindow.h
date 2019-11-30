/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   inspectorWindow.h
 * Author: rober
 *
 * Created on 12 de Novembro de 2019, 23:56
 */

#ifndef _INSPECTORWINDOW_H
#define _INSPECTORWINDOW_H

#include "ui_inspectorWindow.h"

class inspectorWindow : public QDialog {
    Q_OBJECT
public:
    inspectorWindow();
    virtual ~inspectorWindow();
private:
    Ui::inspectorWindow widget;
    
private slots:
    void readRequest();
    void sendRequest();
};

#endif /* _INSPECTORWINDOW_H */
