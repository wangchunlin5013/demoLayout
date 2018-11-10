#ifndef CONTACT_H
#define CONTACT_H

#include <QWidget>
#include <QLabel>
#include <QGridLayout>
#include <QLineEdit>
#include <QCheckBox>

class Contact : public QWidget
{
    Q_OBJECT
public:
    explicit Contact(QWidget *parent = nullptr);

private:
    QLabel *m_emailLabel;
    QLineEdit *m_emailLineEdit;
    QLabel *m_addrLabel;
    QLineEdit *m_addrLineEdit;
    QLabel *m_codeLabel;
    QLineEdit *m_codeLineEdit;
    QLabel *m_moviTelLabel;
    QLineEdit *m_moviTelLineEdit;
    QCheckBox *m_moviTelCheckBox;
    QLabel *m_proTelLabel;
    QLineEdit *m_proTelLineEdit;
    QGridLayout *m_mainLayout;

};

#endif // CONTACT_H
