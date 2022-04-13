#ifndef MYCHILD_H
#define MYCHILD_H

#include <QTextEdit>
#include <QPrinter>

class MyChild : public QTextEdit
{
    Q_OBJECT
public:
    MyChild();
    void newFile();
    bool loadFile(const QString &fileName);
    bool save();
    bool saveAs();
    bool saveFile(QString fileName);
    QString userFriendlyCurrentFile();
    QString currentFile() {return curFile;}
    void mergeFormatOnWordOrSelection(const QTextCharFormat &format);
    void setAlign(int align);
    void setStyle(int style);
protected:
    void closeEvent(QCloseEvent *event);
private slots:
    void documentWasModified();
private:
    bool maybeSave();
    void setCurrentFile(const QString &fileName);
    QString strippedName(const QString &fullFileName);
    QString curFile;
    bool isUntitled;

};
#endif //MYCHILD_H


