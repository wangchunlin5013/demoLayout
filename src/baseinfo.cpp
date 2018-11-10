#include "baseinfo.h"

BaseInfo::BaseInfo(QWidget *parent)
    : QWidget(parent)
{
    m_userNameLabel = new QLabel("用户名:");
    m_userNameLineEdit = new QLineEdit;
    m_nameLable = new QLabel("姓名:");
    m_nameLineEdit = new QLineEdit;
    m_sexLabel = new QLabel("性别:");
    m_sexComboBox = new QComboBox;
    m_sexComboBox->addItems(QStringList()<<"女"<<"男");
    m_departmentLabel = new QLabel("部门:");
    m_departmentTextEdit = new QTextEdit;
    m_ageLabe = new QLabel("年龄:");
    m_ageLineEdit = new QLineEdit;
    m_notesLabel = new QLabel("备注:");
    m_notesLabel->setFrameStyle(QFrame::Panel | QFrame::Sunken);
    m_leftLayout = new QGridLayout;
    m_leftLayout->addWidget(m_userNameLabel,0,0);
    m_leftLayout->addWidget(m_userNameLineEdit,0,1);
    m_leftLayout->addWidget(m_nameLable,1,0);
    m_leftLayout->addWidget(m_nameLineEdit,1,1);
    m_leftLayout->addWidget(m_sexLabel,2,0);
    m_leftLayout->addWidget(m_sexComboBox,2,1);
    m_leftLayout->addWidget(m_departmentLabel,3,0);
    m_leftLayout->addWidget(m_departmentTextEdit,3,1);
    m_leftLayout->addWidget(m_ageLabe,4,0);
    m_leftLayout->addWidget(m_ageLineEdit,4,1);
    m_leftLayout->addWidget(m_notesLabel,5,0,1,2);
    m_leftLayout->setColumnStretch(0,1);
    m_leftLayout->setColumnStretch(1,3);

    m_headLabel = new QLabel("头像:");
    m_headIconLabel = new QLabel;
    QPixmap icon("images/github.png");
    m_headIconLabel->setPixmap(icon);
    m_headIconLabel->resize(icon.size());
    m_updateHeadBtn = new QPushButton("更新");
    m_topRightLayout = new QHBoxLayout;
    m_topRightLayout->setSpacing(20);
    m_topRightLayout->addWidget(m_headLabel);
    m_topRightLayout->addWidget(m_headIconLabel);
    m_topRightLayout->addWidget(m_updateHeadBtn);

    m_introductionLabel = new QLabel("个人简介:");
    m_introductionTextEdit = new QTextEdit;
    m_rightLayout = new QVBoxLayout;
    m_rightLayout->setMargin(10);
    m_rightLayout->addLayout(m_topRightLayout);
    m_rightLayout->addWidget(m_introductionLabel);
    m_rightLayout->addWidget(m_introductionTextEdit);

    QGridLayout *mainLayout = new QGridLayout(this);
    mainLayout->setMargin(10);
    mainLayout->setSpacing(10);
    mainLayout->addLayout(m_leftLayout,0,0);
    mainLayout->addLayout(m_rightLayout,0,1);
    mainLayout->setSizeConstraint(QLayout::SetFixedSize);

}

BaseInfo::~BaseInfo()
{

}
