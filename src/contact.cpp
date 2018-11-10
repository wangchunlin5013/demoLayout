#include "contact.h"

Contact::Contact(QWidget *parent) : QWidget(parent)
{
    m_emailLabel = new QLabel("电子邮件:");
    m_emailLineEdit = new QLineEdit;
    m_addrLabel = new QLabel("联系地址:");
    m_addrLineEdit = new QLineEdit;
    m_codeLabel = new QLabel("邮政编码:");
    m_codeLineEdit = new QLineEdit;
    m_moviTelLabel = new QLabel("移动电话:");
    m_moviTelLineEdit = new QLineEdit;
    m_moviTelCheckBox = new QCheckBox("接收留言");
    m_proTelLabel = new QLabel("办公电话:");
    m_proTelLineEdit = new QLineEdit;

    m_mainLayout = new QGridLayout(this);
    m_mainLayout->setMargin(10);
    m_mainLayout->setSpacing(10);
    m_mainLayout->addWidget(m_emailLabel,0,0);
    m_mainLayout->addWidget(m_emailLineEdit,0,1);
    m_mainLayout->addWidget(m_addrLabel,1,0);
    m_mainLayout->addWidget(m_addrLineEdit,1,1);
    m_mainLayout->addWidget(m_codeLabel,2,0);
    m_mainLayout->addWidget(m_codeLineEdit,2,1);
    m_mainLayout->addWidget(m_moviTelLabel,3,0);
    m_mainLayout->addWidget(m_moviTelLineEdit,3,1);
    m_mainLayout->addWidget(m_moviTelCheckBox,3,2);
    m_mainLayout->addWidget(m_proTelLabel,4,0);
    m_mainLayout->addWidget(m_proTelLineEdit,4,1);
    m_mainLayout->setSizeConstraint(QLayout::SetFixedSize);
}
