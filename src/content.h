#ifndef CONTENT_H
#define CONTENT_H

#include <QStackedWidget>
#include <QPushButton>

class BaseInfo;
class Contact;
class Detail;

class Content : public QFrame
{
    Q_OBJECT
public:
    Content(QWidget *parent=0);

    QStackedWidget *m_stack;
private:    
    QPushButton *m_amendBtn;
    QPushButton *m_closeBtn;
    BaseInfo *m_baseInfo;
    Contact *m_contact;
    Detail *m_detail;
};

#endif // CONTENT_H
