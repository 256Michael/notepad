#include "textedit.hpp"

Textedit::Textedit()
{
    connect(this, &QPlainTextEdit::textChanged, this, &Textedit::onchange);
    connect(this, &QPlainTextEdit::undoAvailable, this, &Textedit::setUndo);
    connect(this, &QPlainTextEdit::redoAvailable, this, &Textedit::setRedo);
    connect(this, &QPlainTextEdit::copyAvailable, this, &Textedit::setCopy);
    setDocumentTitle("nowy dokument");
}
bool Textedit::openfile(QString fileurl)
{
    url = fileurl;
    QFile file(url);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
     {
        QTextStream stream(&file);
        setPlainText(stream.readAll());
        file.close();
        setDocumentTitle(url.mid(url.lastIndexOf('/')+1));
        edited = false;
        return true;
     }
     else 
     {
         qDebug() << "Failed to open file " << url;
         return false;
     }
}
void Textedit::saveclick()
{
    if(url.isEmpty()) saveas();
    else save();
}
void Textedit::saveas()
{
    QString a = "Zapisz plik "+documentTitle();
    url=QFileDialog::getSaveFileName(this, a, QString(), tr("Wszystkie pliki(*);;Prosty Plik Texstowy (*.txt"));
    save();
}
void Textedit::save()
{
    QFile file(url);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
            QTextStream stream(&file);
            stream<<toPlainText();
            file.close();
            edited = false;
            setDocumentTitle(url.mid(url.lastIndexOf('/')+1));
            emit tabtextchange(this,  documentTitle(), false);
            if (button != nullptr) 
            {
                disconnect(button, &QPushButton::clicked, this, &Textedit::saveclick);
                delete button;
                button = nullptr;
            }
    }
    else qDebug() << "Failed to save file " << url;
}
void Textedit::onchange()
{
        edited = true;
        emit tabtextchange(this,  documentTitle(), true);
}
void Textedit::setUndo(bool available)
{
    canUndo=available;
}
void Textedit::setRedo(bool available)
{
    canRedo=available;
}
void Textedit::setCopy(bool available)
{
    canCopy=available;
}
Textedit::~Textedit()
{
    if (button != nullptr) delete button;
}
