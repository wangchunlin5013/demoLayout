#ifndef DETAIL_H
#define DETAIL_H

#include <QWidget>
#include <QLabel>
#include <QComboBox>
#include <QTextEdit>
#include <QLineEdit>
#include <QGridLayout>

class Detail : public QWidget
{
    Q_OBJECT
public:
    explicit Detail(QWidget *parent = nullptr);

private:
    QLabel *m_nationalLabe;
    QComboBox *m_nationalComboBox;
    QLabel *m_provinecLabel;
    QComboBox *m_provinceComboBox;
    QLabel *m_cityLabel;
    QLineEdit *m_cityLineEdit;
    QLabel *m_introductLabel;
    QTextEdit *m_introductTextEdit;
    QGridLayout *m_mainLayout;

};

#endif // DETAIL_H
