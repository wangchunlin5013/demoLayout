#include <QApplication>
#include <QTextCodec>
#include <QSplitter>
#include <QListWidget>
#include "content.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QFont font("AR PL KaitiM GB", 12);  //设置字体和字号
    a.setFont(font);

    QSplitter *splitterMain = new QSplitter(Qt::Horizontal);
    splitterMain->setOpaqueResize(true);
    QListWidget *list = new QListWidget(splitterMain);
    list->insertItem(0, "基本信息");
    list->insertItem(1, "联系方式");
    list->insertItem(2, "详细资料");
    Content *content = new Content(splitterMain);
    QObject::connect(list, SIGNAL(currentRowChanged(int)), content->m_stack, SLOT(setCurrentIndex(int)));

    splitterMain->setWindowTitle("修改用户资料");
    splitterMain->setMinimumSize(splitterMain->minimumSize());
    splitterMain->setMaximumSize(splitterMain->maximumSize());
    splitterMain->show();

    return a.exec();
}
