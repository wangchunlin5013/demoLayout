#ifndef BASEINFO_H
#define BASEINFO_H

#include <QWidget>
#include <QLabel>
#include <QComboBox>
#include <QLineEdit>
#include <QTextEdit>
#include <QPushButton>
#include <QGridLayout>

class BaseInfo : public QWidget
{
    Q_OBJECT
public:
    BaseInfo(QWidget *parent = 0);
    ~BaseInfo();

private:
    QLabel *m_userNameLabel;
    QLabel *m_nameLable;
    QLabel *m_sexLabel;
    QLabel *m_departmentLabel;
    QLabel *m_ageLabe;
    QLabel *m_notesLabel;
    QLineEdit *m_userNameLineEdit;
    QLineEdit *m_nameLineEdit;
    QComboBox *m_sexComboBox;
    QTextEdit *m_departmentTextEdit;
    QLineEdit *m_ageLineEdit;
    QGridLayout *m_leftLayout;

    QLabel *m_headLabel;
    QLabel *m_headIconLabel;
    QPushButton *m_updateHeadBtn;
    QHBoxLayout *m_topRightLayout;
    QLabel *m_introductionLabel;
    QTextEdit *m_introductionTextEdit;
    QVBoxLayout *m_rightLayout;
};

#endif // BASEINFO_H
