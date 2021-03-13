/********************************************************************************
** Form generated from reading UI file 'UI_MapFrameTool.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_MAPFRAMETOOL_H
#define UI_UI_MAPFRAMETOOL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UI_MapFrameTool
{
public:
    QGroupBox *groupBox_IndexMap;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_18;
    QLineEdit *lineEdit_table11;
    QLineEdit *lineEdit_table12;
    QLineEdit *lineEdit_table13;
    QHBoxLayout *horizontalLayout_19;
    QLineEdit *lineEdit_table21;
    QLineEdit *lineEdit_table22;
    QLineEdit *lineEdit_table23;
    QHBoxLayout *horizontalLayout_20;
    QLineEdit *lineEdit_table31;
    QLineEdit *lineEdit_table32;
    QLineEdit *lineEdit_table33;
    QGroupBox *groupBox_MapBorder;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_17;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_3;
    QLineEdit *lineEdit_LonBottomLeft;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_6;
    QLineEdit *lineEdit_LonBottomRight;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_7;
    QLineEdit *lineEdit_LonUpperRight;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_8;
    QLineEdit *lineEdit_LonUpperLeft;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_11;
    QLineEdit *lineEdit_LatBottomLeft;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_12;
    QLineEdit *lineEdit_LatBottomRight;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_13;
    QLineEdit *lineEdit_LatUpperRight;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_14;
    QLineEdit *lineEdit_LatUpperLeft;
    QGroupBox *groupBox_Scale;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioButton_Scale100;
    QRadioButton *radioButton_Scale50;
    QRadioButton *radioButton_Scale25;
    QRadioButton *radioButton_Scale10;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButton_Scale5;
    QRadioButton *radioButton_Scale1;
    QRadioButton *radioButton_Scale25000;
    QGroupBox *groupBox_CalStyle;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton_FromLonLat;
    QRadioButton *radioButton_FromPicture;
    QCheckBox *checkBox_BoolNewPicture;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_21;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QLineEdit *lineEdit_OldPitcureID;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QLineEdit *lineEdit_PictureLon;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *lineEdit_PictureLat;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_4;
    QLineEdit *lineEdit_NewPitcureID;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pushButton_Cal;
    QPushButton *pushButton_Quit;

    void setupUi(QWidget *UI_MapFrameTool)
    {
        if (UI_MapFrameTool->objectName().isEmpty())
            UI_MapFrameTool->setObjectName(QStringLiteral("UI_MapFrameTool"));
        UI_MapFrameTool->resize(471, 567);
        groupBox_IndexMap = new QGroupBox(UI_MapFrameTool);
        groupBox_IndexMap->setObjectName(QStringLiteral("groupBox_IndexMap"));
        groupBox_IndexMap->setGeometry(QRect(10, 440, 451, 121));
        layoutWidget = new QWidget(groupBox_IndexMap);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 415, 98));
        verticalLayout_6 = new QVBoxLayout(layoutWidget);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        lineEdit_table11 = new QLineEdit(layoutWidget);
        lineEdit_table11->setObjectName(QStringLiteral("lineEdit_table11"));
        lineEdit_table11->setEnabled(true);
        lineEdit_table11->setAlignment(Qt::AlignCenter);
        lineEdit_table11->setReadOnly(true);

        horizontalLayout_18->addWidget(lineEdit_table11);

        lineEdit_table12 = new QLineEdit(layoutWidget);
        lineEdit_table12->setObjectName(QStringLiteral("lineEdit_table12"));
        lineEdit_table12->setEnabled(true);
        lineEdit_table12->setAlignment(Qt::AlignCenter);
        lineEdit_table12->setReadOnly(true);

        horizontalLayout_18->addWidget(lineEdit_table12);

        lineEdit_table13 = new QLineEdit(layoutWidget);
        lineEdit_table13->setObjectName(QStringLiteral("lineEdit_table13"));
        lineEdit_table13->setEnabled(true);
        lineEdit_table13->setAlignment(Qt::AlignCenter);
        lineEdit_table13->setReadOnly(true);

        horizontalLayout_18->addWidget(lineEdit_table13);


        verticalLayout_6->addLayout(horizontalLayout_18);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        lineEdit_table21 = new QLineEdit(layoutWidget);
        lineEdit_table21->setObjectName(QStringLiteral("lineEdit_table21"));
        lineEdit_table21->setEnabled(true);
        lineEdit_table21->setAlignment(Qt::AlignCenter);
        lineEdit_table21->setReadOnly(true);

        horizontalLayout_19->addWidget(lineEdit_table21);

        lineEdit_table22 = new QLineEdit(layoutWidget);
        lineEdit_table22->setObjectName(QStringLiteral("lineEdit_table22"));
        lineEdit_table22->setEnabled(true);
        lineEdit_table22->setAlignment(Qt::AlignCenter);
        lineEdit_table22->setReadOnly(true);

        horizontalLayout_19->addWidget(lineEdit_table22);

        lineEdit_table23 = new QLineEdit(layoutWidget);
        lineEdit_table23->setObjectName(QStringLiteral("lineEdit_table23"));
        lineEdit_table23->setEnabled(true);
        lineEdit_table23->setAlignment(Qt::AlignCenter);
        lineEdit_table23->setReadOnly(true);

        horizontalLayout_19->addWidget(lineEdit_table23);


        verticalLayout_6->addLayout(horizontalLayout_19);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        lineEdit_table31 = new QLineEdit(layoutWidget);
        lineEdit_table31->setObjectName(QStringLiteral("lineEdit_table31"));
        lineEdit_table31->setEnabled(true);
        lineEdit_table31->setAlignment(Qt::AlignCenter);
        lineEdit_table31->setReadOnly(true);

        horizontalLayout_20->addWidget(lineEdit_table31);

        lineEdit_table32 = new QLineEdit(layoutWidget);
        lineEdit_table32->setObjectName(QStringLiteral("lineEdit_table32"));
        lineEdit_table32->setEnabled(true);
        lineEdit_table32->setAlignment(Qt::AlignCenter);
        lineEdit_table32->setReadOnly(true);

        horizontalLayout_20->addWidget(lineEdit_table32);

        lineEdit_table33 = new QLineEdit(layoutWidget);
        lineEdit_table33->setObjectName(QStringLiteral("lineEdit_table33"));
        lineEdit_table33->setEnabled(true);
        lineEdit_table33->setAlignment(Qt::AlignCenter);
        lineEdit_table33->setReadOnly(true);

        horizontalLayout_20->addWidget(lineEdit_table33);


        verticalLayout_6->addLayout(horizontalLayout_20);

        groupBox_MapBorder = new QGroupBox(UI_MapFrameTool);
        groupBox_MapBorder->setObjectName(QStringLiteral("groupBox_MapBorder"));
        groupBox_MapBorder->setGeometry(QRect(10, 280, 451, 151));
        layoutWidget1 = new QWidget(groupBox_MapBorder);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 40, 438, 110));
        horizontalLayout_17 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        horizontalLayout_17->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_9->addWidget(label_3);

        lineEdit_LonBottomLeft = new QLineEdit(layoutWidget1);
        lineEdit_LonBottomLeft->setObjectName(QStringLiteral("lineEdit_LonBottomLeft"));
        lineEdit_LonBottomLeft->setEnabled(true);
        lineEdit_LonBottomLeft->setAlignment(Qt::AlignCenter);
        lineEdit_LonBottomLeft->setReadOnly(true);

        horizontalLayout_9->addWidget(lineEdit_LonBottomLeft);


        verticalLayout_5->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_10->addWidget(label_6);

        lineEdit_LonBottomRight = new QLineEdit(layoutWidget1);
        lineEdit_LonBottomRight->setObjectName(QStringLiteral("lineEdit_LonBottomRight"));
        lineEdit_LonBottomRight->setEnabled(true);
        lineEdit_LonBottomRight->setAlignment(Qt::AlignCenter);
        lineEdit_LonBottomRight->setReadOnly(true);

        horizontalLayout_10->addWidget(lineEdit_LonBottomRight);


        verticalLayout_5->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_11->addWidget(label_7);

        lineEdit_LonUpperRight = new QLineEdit(layoutWidget1);
        lineEdit_LonUpperRight->setObjectName(QStringLiteral("lineEdit_LonUpperRight"));
        lineEdit_LonUpperRight->setEnabled(true);
        lineEdit_LonUpperRight->setAlignment(Qt::AlignCenter);
        lineEdit_LonUpperRight->setReadOnly(true);

        horizontalLayout_11->addWidget(lineEdit_LonUpperRight);


        verticalLayout_5->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_12->addWidget(label_8);

        lineEdit_LonUpperLeft = new QLineEdit(layoutWidget1);
        lineEdit_LonUpperLeft->setObjectName(QStringLiteral("lineEdit_LonUpperLeft"));
        lineEdit_LonUpperLeft->setEnabled(true);
        lineEdit_LonUpperLeft->setAlignment(Qt::AlignCenter);
        lineEdit_LonUpperLeft->setReadOnly(true);

        horizontalLayout_12->addWidget(lineEdit_LonUpperLeft);


        verticalLayout_5->addLayout(horizontalLayout_12);


        horizontalLayout_17->addLayout(verticalLayout_5);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_11 = new QLabel(layoutWidget1);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_13->addWidget(label_11);

        lineEdit_LatBottomLeft = new QLineEdit(layoutWidget1);
        lineEdit_LatBottomLeft->setObjectName(QStringLiteral("lineEdit_LatBottomLeft"));
        lineEdit_LatBottomLeft->setEnabled(true);
        lineEdit_LatBottomLeft->setAlignment(Qt::AlignCenter);
        lineEdit_LatBottomLeft->setReadOnly(true);

        horizontalLayout_13->addWidget(lineEdit_LatBottomLeft);


        verticalLayout_3->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_12 = new QLabel(layoutWidget1);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_14->addWidget(label_12);

        lineEdit_LatBottomRight = new QLineEdit(layoutWidget1);
        lineEdit_LatBottomRight->setObjectName(QStringLiteral("lineEdit_LatBottomRight"));
        lineEdit_LatBottomRight->setEnabled(true);
        lineEdit_LatBottomRight->setAlignment(Qt::AlignCenter);
        lineEdit_LatBottomRight->setReadOnly(true);

        horizontalLayout_14->addWidget(lineEdit_LatBottomRight);


        verticalLayout_3->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_13 = new QLabel(layoutWidget1);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_15->addWidget(label_13);

        lineEdit_LatUpperRight = new QLineEdit(layoutWidget1);
        lineEdit_LatUpperRight->setObjectName(QStringLiteral("lineEdit_LatUpperRight"));
        lineEdit_LatUpperRight->setEnabled(true);
        lineEdit_LatUpperRight->setAlignment(Qt::AlignCenter);
        lineEdit_LatUpperRight->setReadOnly(true);

        horizontalLayout_15->addWidget(lineEdit_LatUpperRight);


        verticalLayout_3->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        label_14 = new QLabel(layoutWidget1);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_16->addWidget(label_14);

        lineEdit_LatUpperLeft = new QLineEdit(layoutWidget1);
        lineEdit_LatUpperLeft->setObjectName(QStringLiteral("lineEdit_LatUpperLeft"));
        lineEdit_LatUpperLeft->setEnabled(true);
        lineEdit_LatUpperLeft->setAlignment(Qt::AlignCenter);
        lineEdit_LatUpperLeft->setReadOnly(true);

        horizontalLayout_16->addWidget(lineEdit_LatUpperLeft);


        verticalLayout_3->addLayout(horizontalLayout_16);


        horizontalLayout_17->addLayout(verticalLayout_3);

        groupBox_Scale = new QGroupBox(UI_MapFrameTool);
        groupBox_Scale->setObjectName(QStringLiteral("groupBox_Scale"));
        groupBox_Scale->setGeometry(QRect(10, 190, 451, 81));
        layoutWidget2 = new QWidget(groupBox_Scale);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 30, 441, 48));
        verticalLayout_4 = new QVBoxLayout(layoutWidget2);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        radioButton_Scale100 = new QRadioButton(layoutWidget2);
        radioButton_Scale100->setObjectName(QStringLiteral("radioButton_Scale100"));
        radioButton_Scale100->setChecked(true);

        horizontalLayout_3->addWidget(radioButton_Scale100);

        radioButton_Scale50 = new QRadioButton(layoutWidget2);
        radioButton_Scale50->setObjectName(QStringLiteral("radioButton_Scale50"));

        horizontalLayout_3->addWidget(radioButton_Scale50);

        radioButton_Scale25 = new QRadioButton(layoutWidget2);
        radioButton_Scale25->setObjectName(QStringLiteral("radioButton_Scale25"));

        horizontalLayout_3->addWidget(radioButton_Scale25);

        radioButton_Scale10 = new QRadioButton(layoutWidget2);
        radioButton_Scale10->setObjectName(QStringLiteral("radioButton_Scale10"));

        horizontalLayout_3->addWidget(radioButton_Scale10);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        radioButton_Scale5 = new QRadioButton(layoutWidget2);
        radioButton_Scale5->setObjectName(QStringLiteral("radioButton_Scale5"));
        radioButton_Scale5->setChecked(true);

        horizontalLayout_2->addWidget(radioButton_Scale5);

        radioButton_Scale1 = new QRadioButton(layoutWidget2);
        radioButton_Scale1->setObjectName(QStringLiteral("radioButton_Scale1"));

        horizontalLayout_2->addWidget(radioButton_Scale1);

        radioButton_Scale25000 = new QRadioButton(layoutWidget2);
        radioButton_Scale25000->setObjectName(QStringLiteral("radioButton_Scale25000"));

        horizontalLayout_2->addWidget(radioButton_Scale25000);


        verticalLayout_4->addLayout(horizontalLayout_2);

        groupBox_CalStyle = new QGroupBox(UI_MapFrameTool);
        groupBox_CalStyle->setObjectName(QStringLiteral("groupBox_CalStyle"));
        groupBox_CalStyle->setGeometry(QRect(20, 10, 431, 61));
        layoutWidget3 = new QWidget(groupBox_CalStyle);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(0, 30, 431, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget3);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton_FromLonLat = new QRadioButton(layoutWidget3);
        radioButton_FromLonLat->setObjectName(QStringLiteral("radioButton_FromLonLat"));
        radioButton_FromLonLat->setChecked(true);

        horizontalLayout->addWidget(radioButton_FromLonLat);

        radioButton_FromPicture = new QRadioButton(layoutWidget3);
        radioButton_FromPicture->setObjectName(QStringLiteral("radioButton_FromPicture"));

        horizontalLayout->addWidget(radioButton_FromPicture);

        checkBox_BoolNewPicture = new QCheckBox(layoutWidget3);
        checkBox_BoolNewPicture->setObjectName(QStringLiteral("checkBox_BoolNewPicture"));
        checkBox_BoolNewPicture->setEnabled(false);

        horizontalLayout->addWidget(checkBox_BoolNewPicture);

        layoutWidget4 = new QWidget(UI_MapFrameTool);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(20, 90, 432, 82));
        horizontalLayout_21 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_21->setSpacing(6);
        horizontalLayout_21->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        horizontalLayout_21->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label = new QLabel(layoutWidget4);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_6->addWidget(label);

        lineEdit_OldPitcureID = new QLineEdit(layoutWidget4);
        lineEdit_OldPitcureID->setObjectName(QStringLiteral("lineEdit_OldPitcureID"));
        lineEdit_OldPitcureID->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(lineEdit_OldPitcureID);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_2 = new QLabel(layoutWidget4);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_5->addWidget(label_2);

        lineEdit_PictureLon = new QLineEdit(layoutWidget4);
        lineEdit_PictureLon->setObjectName(QStringLiteral("lineEdit_PictureLon"));
        lineEdit_PictureLon->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(lineEdit_PictureLon);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(layoutWidget4);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        lineEdit_PictureLat = new QLineEdit(layoutWidget4);
        lineEdit_PictureLat->setObjectName(QStringLiteral("lineEdit_PictureLat"));
        lineEdit_PictureLat->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(lineEdit_PictureLat);


        verticalLayout->addLayout(horizontalLayout_4);


        horizontalLayout_21->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_4 = new QLabel(layoutWidget4);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_7->addWidget(label_4);

        lineEdit_NewPitcureID = new QLineEdit(layoutWidget4);
        lineEdit_NewPitcureID->setObjectName(QStringLiteral("lineEdit_NewPitcureID"));
        lineEdit_NewPitcureID->setEnabled(true);
        lineEdit_NewPitcureID->setAlignment(Qt::AlignCenter);
        lineEdit_NewPitcureID->setReadOnly(false);

        horizontalLayout_7->addWidget(lineEdit_NewPitcureID);


        verticalLayout_2->addLayout(horizontalLayout_7);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        pushButton_Cal = new QPushButton(layoutWidget4);
        pushButton_Cal->setObjectName(QStringLiteral("pushButton_Cal"));

        horizontalLayout_8->addWidget(pushButton_Cal);

        pushButton_Quit = new QPushButton(layoutWidget4);
        pushButton_Quit->setObjectName(QStringLiteral("pushButton_Quit"));

        horizontalLayout_8->addWidget(pushButton_Quit);


        verticalLayout_2->addLayout(horizontalLayout_8);


        horizontalLayout_21->addLayout(verticalLayout_2);

        QWidget::setTabOrder(radioButton_FromLonLat, radioButton_FromPicture);
        QWidget::setTabOrder(radioButton_FromPicture, checkBox_BoolNewPicture);
        QWidget::setTabOrder(checkBox_BoolNewPicture, lineEdit_table11);
        QWidget::setTabOrder(lineEdit_table11, lineEdit_table12);
        QWidget::setTabOrder(lineEdit_table12, lineEdit_table13);
        QWidget::setTabOrder(lineEdit_table13, lineEdit_table21);
        QWidget::setTabOrder(lineEdit_table21, lineEdit_table22);
        QWidget::setTabOrder(lineEdit_table22, lineEdit_table23);
        QWidget::setTabOrder(lineEdit_table23, lineEdit_table31);
        QWidget::setTabOrder(lineEdit_table31, lineEdit_table32);
        QWidget::setTabOrder(lineEdit_table32, lineEdit_table33);
        QWidget::setTabOrder(lineEdit_table33, lineEdit_LonBottomLeft);
        QWidget::setTabOrder(lineEdit_LonBottomLeft, lineEdit_LonBottomRight);
        QWidget::setTabOrder(lineEdit_LonBottomRight, lineEdit_LonUpperRight);
        QWidget::setTabOrder(lineEdit_LonUpperRight, lineEdit_LonUpperLeft);
        QWidget::setTabOrder(lineEdit_LonUpperLeft, lineEdit_LatBottomLeft);
        QWidget::setTabOrder(lineEdit_LatBottomLeft, lineEdit_LatBottomRight);
        QWidget::setTabOrder(lineEdit_LatBottomRight, lineEdit_LatUpperRight);
        QWidget::setTabOrder(lineEdit_LatUpperRight, lineEdit_LatUpperLeft);
        QWidget::setTabOrder(lineEdit_LatUpperLeft, radioButton_Scale100);
        QWidget::setTabOrder(radioButton_Scale100, radioButton_Scale50);
        QWidget::setTabOrder(radioButton_Scale50, radioButton_Scale25);
        QWidget::setTabOrder(radioButton_Scale25, radioButton_Scale10);
        QWidget::setTabOrder(radioButton_Scale10, radioButton_Scale5);
        QWidget::setTabOrder(radioButton_Scale5, radioButton_Scale1);
        QWidget::setTabOrder(radioButton_Scale1, radioButton_Scale25000);
        QWidget::setTabOrder(radioButton_Scale25000, lineEdit_OldPitcureID);
        QWidget::setTabOrder(lineEdit_OldPitcureID, lineEdit_PictureLon);
        QWidget::setTabOrder(lineEdit_PictureLon, lineEdit_PictureLat);
        QWidget::setTabOrder(lineEdit_PictureLat, lineEdit_NewPitcureID);
        QWidget::setTabOrder(lineEdit_NewPitcureID, pushButton_Cal);
        QWidget::setTabOrder(pushButton_Cal, pushButton_Quit);

        retranslateUi(UI_MapFrameTool);

        QMetaObject::connectSlotsByName(UI_MapFrameTool);
    } // setupUi

    void retranslateUi(QWidget *UI_MapFrameTool)
    {
        UI_MapFrameTool->setWindowTitle(QApplication::translate("UI_MapFrameTool", "\345\233\276\345\271\205\344\277\241\346\201\257\350\256\241\347\256\227\345\231\250", Q_NULLPTR));
        groupBox_IndexMap->setTitle(QApplication::translate("UI_MapFrameTool", "\346\216\245\345\233\276\350\241\250", Q_NULLPTR));
        groupBox_MapBorder->setTitle(QApplication::translate("UI_MapFrameTool", "\345\233\276\345\273\223\347\202\271\347\273\217\347\272\254\345\272\246\357\274\210DD.MMSS\357\274\211", Q_NULLPTR));
        label_3->setText(QApplication::translate("UI_MapFrameTool", "\345\267\246\344\270\213\357\274\232\347\273\217\345\272\246\357\274\210Y\357\274\211", Q_NULLPTR));
        label_6->setText(QApplication::translate("UI_MapFrameTool", "\345\217\263\344\270\213\357\274\232\347\273\217\345\272\246\357\274\210Y\357\274\211", Q_NULLPTR));
        label_7->setText(QApplication::translate("UI_MapFrameTool", "\345\217\263\344\270\212\357\274\232\347\273\217\345\272\246\357\274\210Y\357\274\211", Q_NULLPTR));
        label_8->setText(QApplication::translate("UI_MapFrameTool", "\345\267\246\344\270\212\357\274\232\347\273\217\345\272\246\357\274\210Y\357\274\211", Q_NULLPTR));
        label_11->setText(QApplication::translate("UI_MapFrameTool", "\347\272\254\345\272\246\357\274\210X\357\274\211", Q_NULLPTR));
        label_12->setText(QApplication::translate("UI_MapFrameTool", "\347\272\254\345\272\246\357\274\210X\357\274\211", Q_NULLPTR));
        label_13->setText(QApplication::translate("UI_MapFrameTool", "\347\272\254\345\272\246\357\274\210X\357\274\211", Q_NULLPTR));
        label_14->setText(QApplication::translate("UI_MapFrameTool", "\347\272\254\345\272\246\357\274\210X\357\274\211", Q_NULLPTR));
        groupBox_Scale->setTitle(QApplication::translate("UI_MapFrameTool", "\346\257\224\344\276\213\345\260\272", Q_NULLPTR));
        radioButton_Scale100->setText(QApplication::translate("UI_MapFrameTool", "1\357\274\232100\344\270\207", Q_NULLPTR));
        radioButton_Scale50->setText(QApplication::translate("UI_MapFrameTool", "1:50\344\270\207", Q_NULLPTR));
        radioButton_Scale25->setText(QApplication::translate("UI_MapFrameTool", "1:25\344\270\207", Q_NULLPTR));
        radioButton_Scale10->setText(QApplication::translate("UI_MapFrameTool", "1:10\344\270\207", Q_NULLPTR));
        radioButton_Scale5->setText(QApplication::translate("UI_MapFrameTool", "1:5\344\270\207", Q_NULLPTR));
        radioButton_Scale1->setText(QApplication::translate("UI_MapFrameTool", "1:1\344\270\207", Q_NULLPTR));
        radioButton_Scale25000->setText(QApplication::translate("UI_MapFrameTool", "1:2.5\344\270\207", Q_NULLPTR));
        groupBox_CalStyle->setTitle(QApplication::translate("UI_MapFrameTool", "\350\256\241\347\256\227\346\226\271\345\274\217", Q_NULLPTR));
        radioButton_FromLonLat->setText(QApplication::translate("UI_MapFrameTool", "\347\273\217\347\272\254\345\272\246\350\256\241\347\256\227\345\233\276\345\271\205\347\274\226\345\217\267", Q_NULLPTR));
        radioButton_FromPicture->setText(QApplication::translate("UI_MapFrameTool", "\345\233\276\345\271\205\347\274\226\345\217\267\350\256\241\347\256\227\345\233\276\345\273\223\347\273\217\347\272\254\345\272\246", Q_NULLPTR));
        checkBox_BoolNewPicture->setText(QApplication::translate("UI_MapFrameTool", "\344\275\277\347\224\250\346\226\260\345\233\276\345\217\267", Q_NULLPTR));
        label->setText(QApplication::translate("UI_MapFrameTool", "\345\233\276 \345\271\205 \347\274\226 \345\217\267", Q_NULLPTR));
        label_2->setText(QApplication::translate("UI_MapFrameTool", "\347\273\217\345\272\246(DD.MMSS)", Q_NULLPTR));
        label_5->setText(QApplication::translate("UI_MapFrameTool", "\347\272\254\345\272\246(DD.MMSS)", Q_NULLPTR));
        label_4->setText(QApplication::translate("UI_MapFrameTool", "\346\226\260\345\233\276\345\271\205\347\274\226\345\217\267", Q_NULLPTR));
        pushButton_Cal->setText(QApplication::translate("UI_MapFrameTool", "\350\256\241\347\256\227", Q_NULLPTR));
        pushButton_Quit->setText(QApplication::translate("UI_MapFrameTool", "\351\200\200\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UI_MapFrameTool: public Ui_UI_MapFrameTool {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_MAPFRAMETOOL_H
