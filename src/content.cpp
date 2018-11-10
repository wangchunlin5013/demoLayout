#include "content.h"
#include "baseinfo.h"
#include "contact.h"
#include "detail.h"
#include <QHBoxLayout>
#include <QVBoxLayout>

Content::Content(QWidget *parent)
    :QFrame(parent)
{
    m_stack = new QStackedWidget(this);
    m_stack->setFrameStyle(QFrame::Panel | QFrame::Raised);

    m_baseInfo = new BaseInfo;
    m_contact = new Contact;
    m_detail = new Detail;
    m_stack->addWidget(m_baseInfo);
    m_stack->addWidget(m_contact);
    m_stack->addWidget(m_detail);

    m_amendBtn = new QPushButton("修改");
    m_closeBtn = new QPushButton("关闭");
    QHBoxLayout *btnLayout = new QHBoxLayout;
    btnLayout->addStretch(1);
    btnLayout->addWidget(m_amendBtn);
    btnLayout->addWidget(m_closeBtn);

    QVBoxLayout *rightLayout = new QVBoxLayout(this);
    rightLayout->setMargin(5);
    rightLayout->setSpacing(10);
    rightLayout->addWidget(m_stack);
    rightLayout->addLayout(btnLayout);
}
