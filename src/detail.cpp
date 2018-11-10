#include "detail.h"

Detail::Detail(QWidget *parent) : QWidget(parent)
{
    m_nationalLabe = new QLabel("国家/地址:");
    m_nationalComboBox = new QComboBox;
    m_nationalComboBox->addItems(QStringList()<<"中国"<<"美国");
    m_nationalComboBox->insertItem(1, "德国");
    m_provinecLabel = new QLabel("省份:");
    m_provinceComboBox = new QComboBox;
    m_provinceComboBox->addItem("四川");
    m_provinceComboBox->addItem("江苏");
    m_provinceComboBox->addItem("重庆");
    m_cityLabel = new QLabel("城市:");
    m_cityLineEdit = new QLineEdit;
    m_introductLabel = new QLabel("个人说明:");
    m_introductTextEdit = new QTextEdit;

    m_mainLayout = new QGridLayout(this);
    m_mainLayout->addWidget(m_nationalLabe,0,0);
    m_mainLayout->addWidget(m_nationalComboBox,0,1);
    m_mainLayout->addWidget(m_provinecLabel,1,0);
    m_mainLayout->addWidget(m_provinceComboBox,1,1);
    m_mainLayout->addWidget(m_cityLabel,2,0);
    m_mainLayout->addWidget(m_cityLineEdit,2,1);
    m_mainLayout->addWidget(m_introductLabel,3,0);
    m_mainLayout->addWidget(m_introductTextEdit,3,1);
}
