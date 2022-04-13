#ifndef MYWORD_H
#define MYWORD_H

#include <QMainWindow>
#include <QPrintDialog>
#include <QPrinter>
#include <QPrintPreviewDialog>
class MyChild;
class QMdiArea;//声明QMdiArea类
class QAction; //声明动作
class QMenu;//声明菜单
class QComboBox;
class QFontComboBox;
class QMdiSubWindow;
class QSignalMapper;
class MyWord : public QMainWindow
{
    Q_OBJECT

public:
    MyWord(QWidget *parent = 0);
    ~MyWord();
protected:
    void closeEvent(QCloseEvent *event);
private slots:
    void fileNew();
    void fileOpen();
    void fileSave();
    void fileSaveAs();
    void filePrint();
    void filePrintPreview();
    void printPreview(QPrinter *);
    void undo();
    void redo();
    void cut();
    void copy();
    void paste();
    void textAlign(QAction *a);
    void about();
    void textBold();
    void textItalic();
    void textUnderline();
    void textFamily(const QString &f);
    void textSize(const QString &p);
    void textColor();
    void textStyle(int styleIndex);
    MyChild *createMyChild();
    void updateMenus();
    void updateWindowMenu();
private:
    void createActions();//创建动作
    void createMenus();//创建菜单
    void createToolBars();
    void createStatusBars();
    void enabledText();
    void colorChanged(const QColor &c);
    MyChild *activeMyChild();
    QMdiSubWindow *findMyChild(const QString &fileName);
    QSignalMapper *windowMapper;
    QMdiArea *mdiArea;  //定义QMdiArea类变量
    QMenu *fileMenu;
    QMenu *editMenu;
    QMenu *formatMenu;
    QMenu *fontMenu;
    QMenu *alignMenu;
    QMenu *windowMenu;
    QMenu *helpMenu;
    QAction *newAct;
    QAction *openAct;
    QAction *saveAct;
    QAction *saveAsAct;
    QAction *printAct;
    QAction *printPreviewAct;
    QAction *exitAct;
    QAction *undoAct;
    QAction *redoAct;
    QAction *cutAct;
    QAction *copyAct;
    QAction *pasteAct;
    QAction *boldAct;
    QAction *italicAct;
    QAction *underlineAct;
    QAction *leftAlignAct;
    QAction *centerAct;
    QAction *rightAlignAct;
    QAction *justifyAct;
    QAction *colorAct;
    QAction *closeAct;
    QAction *closeAllAct;
    QAction *tileAct;
    QAction *cascadeAct;
    QAction *nextAct;
    QAction *previousAct;
    QAction *separatorAct;
    QAction *aboutAct;
    QAction *aboutQtAct;
    QToolBar *fileToolBar;
    QToolBar *editToolBar;
    QToolBar *formatToolBar;\
    QToolBar *comboToolBar;
    QComboBox *comboStyle;
    QFontComboBox *comboFont;
    QComboBox *comboSize;
};

#endif // MYWORD_H
